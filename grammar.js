module.exports = grammar({
  name: "nix",

  extras: $ => [$.comment, /[\s\uFEFF\u2060\u200B\u00A0]/],

  rules: {
    source_file: $ => repeat($.expr),

    comment: $ => token(seq("#", /.*/)),

    expr: $ =>
      choice($.expr_parens, $.expr_let_in, $.set_fun, $.with, $.expr_simple),

    expr_op: $ => choice(seq("-", $.expr_op), $.expr_app),

    expr_app: $ => choice(seq($.expr_app, $.expr_select), $.expr_select),

    expr_let_in: $ => seq("let", repeat1($.binding), "in", $.expr),

    expr_select: $ => choice($.expr_simple),

    expr_simple: $ =>
      choice(
        $.boolean,
        $.null,
        $.rec_set,
        $.set,
        $.identifier,
        $.integer,
        $.float,
        $.string_double_quoted,
        $.string_two_quotes,
        $.h_path,
        $.s_path,
        $.uri
      ),

    expr_parens: $ => seq("(", $.expr, ")"),

    with: $ => seq("with", $.expr, ";"),

    binding_anon_fun: $ =>
      seq($.identifier, "=", repeat1($.fun_arg), $.expr, ";"),

    fun_arg: $ => seq($.identifier, ":"),

    set_fun: $ => seq($.arg_set, ":", $.expr),

    arg_set: $ =>
      seq(
        "{",
        commaSep($.arg_set_attr),
        optional(","),
        optional($.arg_set_rest),
        "}"
      ),

    arg_set_attr: $ => choice(seq($.identifier, "?", $.expr), $.identifier),

    arg_set_rest: $ => "...",

    binding: $ =>
      choice(seq($.identifier, "=", $.expr, ";"), $.binding_anon_fun),

    string_double_quoted: $ =>
      seq(
        '"',
        repeat(
          choice(
            $.string_interp,
            /[^\$"]+/, // no escapes in my kingdom
            /\$[^{]/
          )
        ),
        '"'
      ),
    string_two_quotes: $ =>
      seq(
        "''",
        repeat(
          choice(
            $.string_interp,
            /[^\$']+/, // no escapes in my kingdom
            /\$[^{]/
          )
        ),
        "''"
      ),

    string_interp: $ => seq("${", $.expr, "}"),

    set_access: $ => seq($.set, ".", $.identifier),
    set: $ => seq("{", repeat(choice($.binding, $.inherit)), "}"),
    rec_set: $ => seq("rec", $.set),
    inherit: $ => seq("inherit", repeat1($.expr), ";"),

    boolean: $ => choice("true", "false"),
    null: $ => "null",

    // Basic tokens
    //https://github.com/NixOS/nix/blob/master/src/libexpr/lexer.l#L90
    any_token: $ => /.|\n/,
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_\'\-]*/,
    integer: $ => /[0-9]+/,
    float: $ => /(([1-9][0-9]*\.[0-9]*)|(0?\.[0-9]+))([Ee][+-]?[0-9]+)?/,
    path: $ => /[a-zA-Z0-9\._\-\+]*(\/[a-zA-Z0-9\._\-\+]+)+\/?/,
    h_path: $ => /\~(\/[a-zA-Z0-9\._\-\+]+)+\/?/,
    s_path: $ => /<[a-zA-Z0-9\._\-\+]+(\/[a-zA-Z0-9\._\-\+]+)*>/,
    uri: $ =>
      /[a-zA-Z][a-zA-Z0-9\+\-\.]*:[a-zA-Z0-9%\/\?:@\&=\+\$,\-_\.\!\~\*\']+/
  }
});

//github.com/tree-sitter/tree-sitter-javascript/blob/d4f8134060a4e35e1376c30a5a951ebd79fa9978/grammar.js
https: function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
