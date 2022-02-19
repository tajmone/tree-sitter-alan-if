module.exports = grammar({
  name: 'alan_if',

  extras: $ => [
    /\s/,
    /\r?\n/,
    $.comment
  ],

  rules: {
    adventure: $ => optional($._options),

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

    comment: $ => token(seq('--', /.*/))

  }
});
