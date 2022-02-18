module.exports = grammar({
  name: 'alan_if',

  extras: $ => [
    /\s/,
    /\\\r?\n/,
    $.comment
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => 'hello',

    comment: $ => token(seq('--', /.*/))

  }
});
