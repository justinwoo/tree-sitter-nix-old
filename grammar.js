module.exports = grammar({
  name: "nix",

  rules: {
    source_file: $ => repeat($.expression),

    expression: $ => choice($.string_double_quoted),

    string_double_quoted: $ => seq('"', $.string_parts, '"'),

    string_parts: $ => /.*/
  }
});
