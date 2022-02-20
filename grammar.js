module.exports = grammar({
  name: 'alan_if',

  extras: $ => [
    /\s/,
    /\r?\n/,
    $.comment
  ],

  rules: {
    adventure: $ => seq(
      optional($._options),
      optional($.string),
    ),

    _options: $ => seq(
      $.options_kwd,
      repeat1(choice(
        $.option_debug
      ))
    ),

    options_kwd: $ => choice(
      caseInsensitive('options'),
      caseInsensitive('option')),

    option_debug: $ => seq(
      caseInsensitive('debug'),
      '.'
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"]+/))
      )),
      '"',
    ),


    comment: $ => token(seq('--', /.*/))

  }
});

/*
  The caseInsensitive() function was taken from Matthew
  Stadelman's Fortran grammar (MIT License):
  https://github.com/stadelmanma/tree-sitter-fortran
*/

function caseInsensitive (keyword, aliasAsWord = true) {
  let result = new RegExp(keyword
    .split('')
    .map(l => l !== l.toUpperCase() ? `[${l}${l.toUpperCase()}]` : l)
    .join('')
  )
  if (aliasAsWord) result = alias(result, keyword)
  return result
}
