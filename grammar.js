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

    options_kwd: $ => /options?/i,

    option_debug: $ => seq(
      /debug/i,
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
