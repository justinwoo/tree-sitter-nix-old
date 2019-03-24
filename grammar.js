module.exports = grammar({
  name: "nix",

  rules: {
    source_file: $ => repeat($.expr),

    expr: $ => choice(
      $.expr_simple,
    ),

    expr_op: $ => choice(
      seq('-', $.expr_op),
      $.expr_app,
    ),

    expr_app: $ => choice(
      seq($.expr_app, $.expr_select),
      $.expr_select,
    ),

    expr_select: $ => choice (
      $.expr_simple,
    ),

    expr_simple: $ => choice(
      $.identifier,
      $.integer,
      $.float,
      $.string_double_quoted,
      $.h_path,
      $.s_path,
      $.uri,
    ),

    string_double_quoted: $ => seq('"', $.string_parts, '"'),

    string_parts: $ => /.*/,

    // Basic tokens
    //https://github.com/NixOS/nix/blob/master/src/libexpr/lexer.l#L90
    any_token: $ => /.|\n/,
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_\'\-]*/,
    integer: $ => /[0-9]+/,
    float: $ => /(([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+))([Ee][+-]?[0-9]+)?/,
    path:  $ => /[a-zA-Z0-9\._\-\+]*(\/[a-zA-Z0-9\._\-\+]+)+\/?/,
    h_path: $ => /\~(\/[a-zA-Z0-9\._\-\+]+)+\/?/,
    s_path: $ => /<[a-zA-Z0-9\._\-\+]+(\/[a-zA-Z0-9\._\-\+]+)*>/,
    uri: $ => /[a-zA-Z][a-zA-Z0-9\+\-\.]*:[a-zA-Z0-9%\/\?:@\&=\+\$,\-_\.\!\~\*\']+/
  }
});
