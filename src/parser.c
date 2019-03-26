#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 119
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_comment = 1,
  anon_sym_DASH = 2,
  anon_sym_let = 3,
  anon_sym_in = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_with = 7,
  anon_sym_SEMI = 8,
  anon_sym_EQ = 9,
  anon_sym_COLON = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACE = 13,
  anon_sym_QMARK = 14,
  sym_arg_set_rest = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_double_quoted_token1 = 17,
  aux_sym_string_double_quoted_token2 = 18,
  anon_sym_SQUOTE_SQUOTE = 19,
  aux_sym_string_two_quotes_token1 = 20,
  anon_sym_DOLLAR_LBRACE = 21,
  anon_sym_DOT = 22,
  anon_sym_rec = 23,
  anon_sym_AT = 24,
  anon_sym_inherit = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  sym_null = 28,
  sym_identifier = 29,
  sym_integer = 30,
  sym_float = 31,
  sym_h_path = 32,
  sym_s_path = 33,
  sym_uri = 34,
  sym_source_file = 35,
  sym_expr = 36,
  sym_expr_let_in = 37,
  sym_expr_simple = 38,
  sym_expr_parens = 39,
  sym_with = 40,
  sym_binding_anon_fun = 41,
  sym_fun_arg = 42,
  sym_set_fun = 43,
  sym_arg_set = 44,
  sym_arg_set_attr = 45,
  sym_binding = 46,
  sym_string_double_quoted = 47,
  sym_string_two_quotes = 48,
  sym_string_interp = 49,
  sym_set = 50,
  sym_rec_set = 51,
  sym_bind_set = 52,
  sym_inherit = 53,
  sym_boolean = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_expr_let_in_repeat1 = 56,
  aux_sym_binding_anon_fun_repeat1 = 57,
  aux_sym_arg_set_repeat1 = 58,
  aux_sym_string_double_quoted_repeat1 = 59,
  aux_sym_string_two_quotes_repeat1 = 60,
  aux_sym_set_repeat1 = 61,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DASH] = "-",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_with] = "with",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_QMARK] = "?",
  [sym_arg_set_rest] = "arg_set_rest",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_double_quoted_token1] = "string_double_quoted_token1",
  [aux_sym_string_double_quoted_token2] = "string_double_quoted_token2",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [aux_sym_string_two_quotes_token1] = "string_two_quotes_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DOT] = ".",
  [anon_sym_rec] = "rec",
  [anon_sym_AT] = "@",
  [anon_sym_inherit] = "inherit",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_h_path] = "h_path",
  [sym_s_path] = "s_path",
  [sym_uri] = "uri",
  [sym_source_file] = "source_file",
  [sym_expr] = "expr",
  [sym_expr_let_in] = "expr_let_in",
  [sym_expr_simple] = "expr_simple",
  [sym_expr_parens] = "expr_parens",
  [sym_with] = "with",
  [sym_binding_anon_fun] = "binding_anon_fun",
  [sym_fun_arg] = "fun_arg",
  [sym_set_fun] = "set_fun",
  [sym_arg_set] = "arg_set",
  [sym_arg_set_attr] = "arg_set_attr",
  [sym_binding] = "binding",
  [sym_string_double_quoted] = "string_double_quoted",
  [sym_string_two_quotes] = "string_two_quotes",
  [sym_string_interp] = "string_interp",
  [sym_set] = "set",
  [sym_rec_set] = "rec_set",
  [sym_bind_set] = "bind_set",
  [sym_inherit] = "inherit",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expr_let_in_repeat1] = "expr_let_in_repeat1",
  [aux_sym_binding_anon_fun_repeat1] = "binding_anon_fun_repeat1",
  [aux_sym_arg_set_repeat1] = "arg_set_repeat1",
  [aux_sym_string_double_quoted_repeat1] = "string_double_quoted_repeat1",
  [aux_sym_string_two_quotes_repeat1] = "string_two_quotes_repeat1",
  [aux_sym_set_repeat1] = "set_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_arg_set_rest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_double_quoted_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_double_quoted_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_two_quotes_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inherit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_h_path] = {
    .visible = true,
    .named = true,
  },
  [sym_s_path] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_let_in] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_parens] = {
    .visible = true,
    .named = true,
  },
  [sym_with] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_anon_fun] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_set_fun] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_set] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_set_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_string_double_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_string_two_quotes] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interp] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_rec_set] = {
    .visible = true,
    .named = true,
  },
  [sym_bind_set] = {
    .visible = true,
    .named = true,
  },
  [sym_inherit] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_let_in_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binding_anon_fun_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_double_quoted_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_two_quotes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '0')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == 'f')
        ADVANCE(18);
      if (lookahead == 'i')
        ADVANCE(19);
      if (lookahead == 'l')
        ADVANCE(20);
      if (lookahead == 'n')
        ADVANCE(21);
      if (lookahead == 'r')
        ADVANCE(22);
      if (lookahead == 't')
        ADVANCE(23);
      if (lookahead == 'w')
        ADVANCE(24);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '~')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '\'')
        ADVANCE(32);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(43);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(44);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      if (lookahead == '/')
        ADVANCE(45);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 33:
      if (lookahead == '.')
        ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(48);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(51);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(52);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(53);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_arg_set_rest);
      END_STATE();
    case 47:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_s_path);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(59);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '/')
        ADVANCE(62);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 64:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == '0')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(65);
      if (lookahead == 'l')
        ADVANCE(66);
      if (lookahead == 'n')
        ADVANCE(67);
      if (lookahead == 'r')
        ADVANCE(68);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == 'w')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '~')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(64);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'u')
        ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(77);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'r')
        ADVANCE(78);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'i')
        ADVANCE(79);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'l')
        ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 74:
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(82);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'l')
        ADVANCE(83);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'c')
        ADVANCE(84);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'u')
        ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 's')
        ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'l')
        ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'h')
        ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(91);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':')
        ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 92:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(93);
      if (lookahead == '0')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == 'f')
        ADVANCE(65);
      if (lookahead == 'l')
        ADVANCE(66);
      if (lookahead == 'n')
        ADVANCE(67);
      if (lookahead == 'r')
        ADVANCE(68);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == 'w')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '~')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(92);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == '.')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(95);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 95:
      if (lookahead == '.')
        ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(95);
      if (lookahead == 'i')
        ADVANCE(97);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(98);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(99);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(100);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(102);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_inherit);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 104:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '"' ||
          lookahead == '$')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead == '#')
        ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead))
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == '#')
        ADVANCE(109);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(110);
      if (lookahead != 0)
        ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '\'')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead == '#')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(95);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(112);
      END_STATE();
    case 113:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'i')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 114:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(114);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 92},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 94},
  [6] = {.lex_state = 64},
  [7] = {.lex_state = 96},
  [8] = {.lex_state = 104},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 108},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 64},
  [14] = {.lex_state = 64},
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 96},
  [17] = {.lex_state = 92},
  [18] = {.lex_state = 112},
  [19] = {.lex_state = 113},
  [20] = {.lex_state = 113},
  [21] = {.lex_state = 94},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 114},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 94},
  [26] = {.lex_state = 94},
  [27] = {.lex_state = 64},
  [28] = {.lex_state = 112},
  [29] = {.lex_state = 96},
  [30] = {.lex_state = 96},
  [31] = {.lex_state = 94},
  [32] = {.lex_state = 64},
  [33] = {.lex_state = 92},
  [34] = {.lex_state = 104},
  [35] = {.lex_state = 94},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 64},
  [38] = {.lex_state = 64},
  [39] = {.lex_state = 64},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 108},
  [42] = {.lex_state = 64},
  [43] = {.lex_state = 64},
  [44] = {.lex_state = 112},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 64},
  [47] = {.lex_state = 64},
  [48] = {.lex_state = 113},
  [49] = {.lex_state = 113},
  [50] = {.lex_state = 64},
  [51] = {.lex_state = 92},
  [52] = {.lex_state = 64},
  [53] = {.lex_state = 94},
  [54] = {.lex_state = 94},
  [55] = {.lex_state = 64},
  [56] = {.lex_state = 64},
  [57] = {.lex_state = 64},
  [58] = {.lex_state = 64},
  [59] = {.lex_state = 92},
  [60] = {.lex_state = 96},
  [61] = {.lex_state = 94},
  [62] = {.lex_state = 94},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 64},
  [65] = {.lex_state = 94},
  [66] = {.lex_state = 92},
  [67] = {.lex_state = 104},
  [68] = {.lex_state = 113},
  [69] = {.lex_state = 64},
  [70] = {.lex_state = 92},
  [71] = {.lex_state = 92},
  [72] = {.lex_state = 94},
  [73] = {.lex_state = 92},
  [74] = {.lex_state = 108},
  [75] = {.lex_state = 92},
  [76] = {.lex_state = 64},
  [77] = {.lex_state = 64},
  [78] = {.lex_state = 64},
  [79] = {.lex_state = 92},
  [80] = {.lex_state = 64},
  [81] = {.lex_state = 64},
  [82] = {.lex_state = 113},
  [83] = {.lex_state = 96},
  [84] = {.lex_state = 64},
  [85] = {.lex_state = 64},
  [86] = {.lex_state = 64},
  [87] = {.lex_state = 64},
  [88] = {.lex_state = 94},
  [89] = {.lex_state = 64},
  [90] = {.lex_state = 94},
  [91] = {.lex_state = 112},
  [92] = {.lex_state = 94},
  [93] = {.lex_state = 94},
  [94] = {.lex_state = 94},
  [95] = {.lex_state = 94},
  [96] = {.lex_state = 113},
  [97] = {.lex_state = 64},
  [98] = {.lex_state = 104},
  [99] = {.lex_state = 64},
  [100] = {.lex_state = 108},
  [101] = {.lex_state = 64},
  [102] = {.lex_state = 113},
  [103] = {.lex_state = 64},
  [104] = {.lex_state = 64},
  [105] = {.lex_state = 64},
  [106] = {.lex_state = 96},
  [107] = {.lex_state = 64},
  [108] = {.lex_state = 113},
  [109] = {.lex_state = 64},
  [110] = {.lex_state = 64},
  [111] = {.lex_state = 94},
  [112] = {.lex_state = 94},
  [113] = {.lex_state = 64},
  [114] = {.lex_state = 113},
  [115] = {.lex_state = 64},
  [116] = {.lex_state = 96},
  [117] = {.lex_state = 64},
  [118] = {.lex_state = 64},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_h_path] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arg_set_rest] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [aux_sym_string_double_quoted_token2] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [sym_s_path] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_expr_let_in] = STATE(12),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr] = STATE(15),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_set] = STATE(2),
    [sym_rec_set] = STATE(2),
    [sym_source_file] = STATE(13),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(14),
    [sym_boolean] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [2] = {
    [sym_arg_set_rest] = ACTIONS(29),
    [sym_uri] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(31),
    [sym_float] = ACTIONS(29),
    [anon_sym_rec] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [sym_s_path] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [sym_integer] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_h_path] = ACTIONS(29),
    [anon_sym_with] = ACTIONS(31),
    [sym_null] = ACTIONS(31),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(29),
  },
  [3] = {
    [sym_arg_set_rest] = ACTIONS(33),
    [sym_uri] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(35),
    [sym_float] = ACTIONS(33),
    [anon_sym_rec] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_let] = ACTIONS(35),
    [sym_s_path] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [sym_integer] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [sym_h_path] = ACTIONS(33),
    [anon_sym_with] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(33),
  },
  [4] = {
    [sym_set] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [5] = {
    [sym_binding] = STATE(19),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(19),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
  },
  [6] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(22),
    [sym_expr] = STATE(23),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [7] = {
    [sym_binding] = STATE(29),
    [sym_inherit] = STATE(29),
    [aux_sym_set_repeat1] = STATE(29),
    [sym_binding_anon_fun] = STATE(30),
    [sym_arg_set_attr] = STATE(31),
    [anon_sym_RBRACE] = ACTIONS(43),
    [sym_arg_set_rest] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_inherit] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(34),
    [sym_string_interp] = STATE(34),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(53),
    [aux_sym_string_double_quoted_token2] = ACTIONS(55),
    [aux_sym_string_double_quoted_token1] = ACTIONS(55),
    [sym_comment] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
  },
  [9] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(36),
    [sym_expr] = STATE(37),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [10] = {
    [sym_arg_set_rest] = ACTIONS(29),
    [sym_uri] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(31),
    [sym_float] = ACTIONS(29),
    [anon_sym_rec] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [sym_s_path] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [sym_integer] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_h_path] = ACTIONS(29),
    [anon_sym_with] = ACTIONS(31),
    [sym_null] = ACTIONS(31),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(63),
  },
  [11] = {
    [sym_string_interp] = STATE(41),
    [aux_sym_string_two_quotes_repeat1] = STATE(41),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(65),
    [aux_sym_string_double_quoted_token2] = ACTIONS(67),
    [aux_sym_string_two_quotes_token1] = ACTIONS(67),
    [sym_comment] = ACTIONS(57),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(69),
  },
  [12] = {
    [sym_arg_set_rest] = ACTIONS(71),
    [sym_uri] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(73),
    [sym_float] = ACTIONS(71),
    [anon_sym_rec] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
    [sym_s_path] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [sym_integer] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [sym_h_path] = ACTIONS(71),
    [anon_sym_with] = ACTIONS(73),
    [sym_null] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(71),
  },
  [13] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(75),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(77),
  },
  [15] = {
    [sym_boolean] = STATE(2),
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(14),
    [sym_expr] = STATE(43),
    [sym_expr_parens] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(43),
    [sym_with] = STATE(12),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [16] = {
    [sym_binding] = STATE(29),
    [sym_inherit] = STATE(29),
    [aux_sym_set_repeat1] = STATE(29),
    [sym_binding_anon_fun] = STATE(30),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_inherit] = ACTIONS(49),
    [sym_identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_arg_set_rest] = ACTIONS(85),
    [sym_uri] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(87),
    [sym_float] = ACTIONS(85),
    [anon_sym_rec] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_let] = ACTIONS(87),
    [sym_s_path] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym_h_path] = ACTIONS(85),
    [anon_sym_with] = ACTIONS(87),
    [sym_null] = ACTIONS(87),
    [sym_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(85),
  },
  [18] = {
    [anon_sym_EQ] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_binding] = STATE(48),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_in] = ACTIONS(93),
  },
  [20] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_in] = ACTIONS(95),
  },
  [21] = {
    [sym_binding] = STATE(49),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(49),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
  },
  [22] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(97),
  },
  [23] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(99),
  },
  [24] = {
    [anon_sym_COLON] = ACTIONS(101),
    [sym_arg_set_rest] = ACTIONS(103),
    [sym_uri] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(105),
    [sym_float] = ACTIONS(103),
    [anon_sym_rec] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(105),
    [sym_s_path] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(105),
    [sym_integer] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [sym_h_path] = ACTIONS(103),
    [anon_sym_with] = ACTIONS(105),
    [sym_null] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(103),
  },
  [25] = {
    [anon_sym_RBRACE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [sym_arg_set_rest] = ACTIONS(109),
  },
  [27] = {
    [sym_boolean] = STATE(2),
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(56),
    [sym_expr] = STATE(55),
    [sym_expr_parens] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(55),
    [sym_with] = STATE(12),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [28] = {
    [anon_sym_RBRACE] = ACTIONS(113),
    [sym_arg_set_rest] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_QMARK] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_binding] = STATE(60),
    [sym_inherit] = STATE(60),
    [aux_sym_set_repeat1] = STATE(60),
    [sym_binding_anon_fun] = STATE(30),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_inherit] = ACTIONS(49),
    [sym_identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_inherit] = ACTIONS(95),
    [sym_identifier] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [aux_sym_arg_set_repeat1] = STATE(62),
    [anon_sym_RBRACE] = ACTIONS(107),
    [sym_arg_set_rest] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(64),
    [sym_expr] = STATE(65),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [33] = {
    [sym_arg_set_rest] = ACTIONS(127),
    [sym_uri] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(129),
    [sym_float] = ACTIONS(127),
    [anon_sym_rec] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_let] = ACTIONS(129),
    [sym_s_path] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(129),
    [sym_integer] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym_h_path] = ACTIONS(127),
    [anon_sym_with] = ACTIONS(129),
    [sym_null] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(127),
  },
  [34] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(67),
    [sym_string_interp] = STATE(67),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(53),
    [aux_sym_string_double_quoted_token2] = ACTIONS(131),
    [aux_sym_string_double_quoted_token1] = ACTIONS(131),
    [sym_comment] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(133),
  },
  [35] = {
    [sym_binding] = STATE(68),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(68),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
  },
  [36] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(135),
  },
  [37] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(137),
  },
  [38] = {
    [sym_set] = STATE(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [39] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(64),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [40] = {
    [sym_arg_set_rest] = ACTIONS(139),
    [sym_uri] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(141),
    [sym_float] = ACTIONS(139),
    [anon_sym_rec] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_let] = ACTIONS(141),
    [sym_s_path] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(141),
    [sym_integer] = ACTIONS(141),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [sym_h_path] = ACTIONS(139),
    [anon_sym_with] = ACTIONS(141),
    [sym_null] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(139),
  },
  [41] = {
    [sym_string_interp] = STATE(74),
    [aux_sym_string_two_quotes_repeat1] = STATE(74),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(65),
    [aux_sym_string_double_quoted_token2] = ACTIONS(143),
    [aux_sym_string_two_quotes_token1] = ACTIONS(143),
    [sym_comment] = ACTIONS(57),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(145),
  },
  [42] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(14),
    [sym_expr] = STATE(75),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [43] = {
    [sym_boolean] = STATE(2),
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(14),
    [sym_expr] = STATE(43),
    [sym_expr_parens] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(43),
    [sym_with] = STATE(12),
    [sym_uri] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(150),
    [sym_float] = ACTIONS(147),
    [anon_sym_rec] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(156),
    [sym_s_path] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(150),
    [sym_integer] = ACTIONS(162),
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_h_path] = ACTIONS(147),
    [anon_sym_with] = ACTIONS(173),
    [sym_null] = ACTIONS(162),
    [sym_identifier] = ACTIONS(176),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(179),
  },
  [44] = {
    [anon_sym_EQ] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_arg_set_rest] = ACTIONS(103),
    [sym_uri] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(105),
    [sym_float] = ACTIONS(103),
    [anon_sym_rec] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(105),
    [sym_s_path] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(105),
    [sym_integer] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [sym_h_path] = ACTIONS(103),
    [anon_sym_with] = ACTIONS(105),
    [sym_null] = ACTIONS(105),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(103),
  },
  [46] = {
    [sym_expr_let_in] = STATE(12),
    [sym_fun_arg] = STATE(78),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr] = STATE(77),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_set] = STATE(2),
    [sym_rec_set] = STATE(2),
    [aux_sym_binding_anon_fun_repeat1] = STATE(78),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(36),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(182),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [47] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(14),
    [sym_expr] = STATE(79),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [48] = {
    [sym_binding] = STATE(48),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(184),
    [anon_sym_in] = ACTIONS(187),
  },
  [49] = {
    [sym_binding] = STATE(48),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_in] = ACTIONS(189),
  },
  [50] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(22),
    [sym_expr] = STATE(75),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [51] = {
    [sym_arg_set_rest] = ACTIONS(191),
    [sym_uri] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(193),
    [sym_float] = ACTIONS(191),
    [anon_sym_rec] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_let] = ACTIONS(193),
    [sym_s_path] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(193),
    [sym_integer] = ACTIONS(193),
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [sym_h_path] = ACTIONS(191),
    [anon_sym_with] = ACTIONS(193),
    [sym_null] = ACTIONS(193),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(191),
  },
  [52] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(195),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_binding] = STATE(82),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(82),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
  },
  [55] = {
    [sym_boolean] = STATE(2),
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(56),
    [sym_expr] = STATE(84),
    [sym_expr_parens] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(84),
    [sym_with] = STATE(12),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [56] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(201),
  },
  [57] = {
    [sym_expr_let_in] = STATE(12),
    [sym_fun_arg] = STATE(87),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr] = STATE(86),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_set] = STATE(2),
    [sym_rec_set] = STATE(2),
    [aux_sym_binding_anon_fun_repeat1] = STATE(87),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(36),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(182),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [58] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(89),
    [sym_expr] = STATE(90),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [59] = {
    [sym_arg_set_rest] = ACTIONS(205),
    [sym_uri] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(207),
    [sym_float] = ACTIONS(205),
    [anon_sym_rec] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_let] = ACTIONS(207),
    [sym_s_path] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(207),
    [sym_integer] = ACTIONS(207),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [sym_h_path] = ACTIONS(205),
    [anon_sym_with] = ACTIONS(207),
    [sym_null] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(205),
  },
  [60] = {
    [sym_binding] = STATE(60),
    [sym_inherit] = STATE(60),
    [aux_sym_set_repeat1] = STATE(60),
    [sym_binding_anon_fun] = STATE(30),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_inherit] = ACTIONS(211),
    [sym_identifier] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_arg_set_attr] = STATE(93),
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym_arg_set_rest] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(219),
  },
  [62] = {
    [aux_sym_arg_set_repeat1] = STATE(95),
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym_arg_set_rest] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [sym_binding] = STATE(96),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(96),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
  },
  [64] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(223),
  },
  [65] = {
    [anon_sym_RBRACE] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym_arg_set_rest] = ACTIONS(227),
    [sym_uri] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(229),
    [sym_float] = ACTIONS(227),
    [anon_sym_rec] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_let] = ACTIONS(229),
    [sym_s_path] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_true] = ACTIONS(229),
    [sym_integer] = ACTIONS(229),
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [sym_h_path] = ACTIONS(227),
    [anon_sym_with] = ACTIONS(229),
    [sym_null] = ACTIONS(229),
    [sym_identifier] = ACTIONS(229),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(227),
  },
  [67] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(67),
    [sym_string_interp] = STATE(67),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(231),
    [aux_sym_string_double_quoted_token2] = ACTIONS(234),
    [aux_sym_string_double_quoted_token1] = ACTIONS(234),
    [sym_comment] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(237),
  },
  [68] = {
    [sym_binding] = STATE(48),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_in] = ACTIONS(239),
  },
  [69] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(36),
    [sym_expr] = STATE(75),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [70] = {
    [sym_arg_set_rest] = ACTIONS(241),
    [sym_uri] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(243),
    [sym_float] = ACTIONS(241),
    [anon_sym_rec] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_let] = ACTIONS(243),
    [sym_s_path] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(243),
    [sym_integer] = ACTIONS(243),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(241),
    [sym_h_path] = ACTIONS(241),
    [anon_sym_with] = ACTIONS(243),
    [sym_null] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(241),
  },
  [71] = {
    [sym_arg_set_rest] = ACTIONS(245),
    [sym_uri] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_false] = ACTIONS(247),
    [sym_float] = ACTIONS(245),
    [anon_sym_rec] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_let] = ACTIONS(247),
    [sym_s_path] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym_h_path] = ACTIONS(245),
    [anon_sym_with] = ACTIONS(247),
    [sym_null] = ACTIONS(247),
    [sym_identifier] = ACTIONS(247),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(245),
  },
  [72] = {
    [anon_sym_RBRACE] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym_arg_set_rest] = ACTIONS(251),
    [sym_uri] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_false] = ACTIONS(253),
    [sym_float] = ACTIONS(251),
    [anon_sym_rec] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_let] = ACTIONS(253),
    [sym_s_path] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(251),
    [anon_sym_true] = ACTIONS(253),
    [sym_integer] = ACTIONS(253),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_h_path] = ACTIONS(251),
    [anon_sym_with] = ACTIONS(253),
    [sym_null] = ACTIONS(253),
    [sym_identifier] = ACTIONS(253),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(251),
  },
  [74] = {
    [sym_string_interp] = STATE(74),
    [aux_sym_string_two_quotes_repeat1] = STATE(74),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(255),
    [aux_sym_string_double_quoted_token2] = ACTIONS(258),
    [aux_sym_string_two_quotes_token1] = ACTIONS(258),
    [sym_comment] = ACTIONS(57),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(261),
  },
  [75] = {
    [sym_arg_set_rest] = ACTIONS(263),
    [sym_uri] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_false] = ACTIONS(265),
    [sym_float] = ACTIONS(263),
    [anon_sym_rec] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_let] = ACTIONS(265),
    [sym_s_path] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(265),
    [sym_integer] = ACTIONS(265),
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [sym_h_path] = ACTIONS(263),
    [anon_sym_with] = ACTIONS(265),
    [sym_null] = ACTIONS(265),
    [sym_identifier] = ACTIONS(265),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(263),
  },
  [76] = {
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(63),
  },
  [77] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(269),
  },
  [78] = {
    [sym_expr_let_in] = STATE(12),
    [sym_fun_arg] = STATE(104),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr] = STATE(103),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_set] = STATE(2),
    [sym_rec_set] = STATE(2),
    [aux_sym_binding_anon_fun_repeat1] = STATE(104),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(36),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(182),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [79] = {
    [sym_arg_set_rest] = ACTIONS(271),
    [sym_uri] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(273),
    [sym_float] = ACTIONS(271),
    [anon_sym_rec] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_let] = ACTIONS(273),
    [sym_s_path] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(273),
    [sym_integer] = ACTIONS(273),
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_LBRACE] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [anon_sym_RBRACE] = ACTIONS(271),
    [sym_h_path] = ACTIONS(271),
    [anon_sym_with] = ACTIONS(273),
    [sym_null] = ACTIONS(273),
    [sym_identifier] = ACTIONS(273),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(271),
  },
  [80] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(22),
    [sym_expr] = STATE(79),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [81] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(275),
  },
  [82] = {
    [sym_binding] = STATE(48),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_in] = ACTIONS(277),
  },
  [83] = {
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_inherit] = ACTIONS(281),
    [sym_identifier] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [sym_boolean] = STATE(2),
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(56),
    [sym_expr] = STATE(84),
    [sym_expr_parens] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(84),
    [sym_with] = STATE(12),
    [sym_uri] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(150),
    [sym_float] = ACTIONS(147),
    [anon_sym_rec] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(150),
    [sym_integer] = ACTIONS(162),
    [sym_s_path] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_h_path] = ACTIONS(147),
    [anon_sym_with] = ACTIONS(173),
    [sym_null] = ACTIONS(162),
    [sym_identifier] = ACTIONS(176),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(179),
  },
  [85] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(56),
    [sym_expr] = STATE(75),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [86] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(286),
  },
  [87] = {
    [sym_expr_let_in] = STATE(12),
    [sym_fun_arg] = STATE(104),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr] = STATE(107),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_set] = STATE(2),
    [sym_rec_set] = STATE(2),
    [aux_sym_binding_anon_fun_repeat1] = STATE(104),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(36),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(182),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [88] = {
    [sym_binding] = STATE(108),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(108),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(39),
  },
  [89] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(288),
  },
  [90] = {
    [anon_sym_RBRACE] = ACTIONS(290),
    [sym_arg_set_rest] = ACTIONS(290),
    [anon_sym_COMMA] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(113),
    [sym_arg_set_rest] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(117),
  },
  [92] = {
    [anon_sym_RBRACE] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [anon_sym_RBRACE] = ACTIONS(294),
    [sym_arg_set_rest] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [sym_arg_set_attr] = STATE(93),
    [anon_sym_RBRACE] = ACTIONS(292),
    [sym_arg_set_rest] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(219),
  },
  [95] = {
    [aux_sym_arg_set_repeat1] = STATE(95),
    [anon_sym_RBRACE] = ACTIONS(294),
    [sym_arg_set_rest] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [sym_binding] = STATE(48),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_in] = ACTIONS(301),
  },
  [97] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(64),
    [sym_expr] = STATE(75),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [98] = {
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(303),
    [aux_sym_string_double_quoted_token2] = ACTIONS(303),
    [aux_sym_string_double_quoted_token1] = ACTIONS(303),
    [sym_comment] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(303),
  },
  [99] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(36),
    [sym_expr] = STATE(79),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [100] = {
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(303),
    [aux_sym_string_double_quoted_token2] = ACTIONS(303),
    [aux_sym_string_two_quotes_token1] = ACTIONS(303),
    [sym_comment] = ACTIONS(57),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(303),
  },
  [101] = {
    [sym_uri] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(307),
    [sym_float] = ACTIONS(305),
    [anon_sym_rec] = ACTIONS(307),
    [anon_sym_let] = ACTIONS(307),
    [sym_s_path] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(307),
    [sym_integer] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [sym_h_path] = ACTIONS(305),
    [anon_sym_with] = ACTIONS(307),
    [sym_null] = ACTIONS(307),
    [sym_identifier] = ACTIONS(307),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(305),
  },
  [102] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(309),
    [anon_sym_in] = ACTIONS(309),
  },
  [103] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(311),
  },
  [104] = {
    [sym_fun_arg] = STATE(104),
    [aux_sym_binding_anon_fun_repeat1] = STATE(104),
    [sym_uri] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(315),
    [sym_float] = ACTIONS(313),
    [anon_sym_rec] = ACTIONS(315),
    [anon_sym_let] = ACTIONS(315),
    [sym_s_path] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(315),
    [sym_integer] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_h_path] = ACTIONS(313),
    [anon_sym_with] = ACTIONS(315),
    [sym_null] = ACTIONS(315),
    [sym_identifier] = ACTIONS(317),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(313),
  },
  [105] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(56),
    [sym_expr] = STATE(79),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [106] = {
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_inherit] = ACTIONS(309),
    [sym_identifier] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(322),
  },
  [108] = {
    [sym_binding] = STATE(48),
    [sym_binding_anon_fun] = STATE(20),
    [aux_sym_expr_let_in_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_in] = ACTIONS(324),
  },
  [109] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(89),
    [sym_expr] = STATE(75),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [110] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(326),
  },
  [111] = {
    [anon_sym_RBRACE] = ACTIONS(328),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [sym_arg_set_attr] = STATE(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(219),
  },
  [113] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(64),
    [sym_expr] = STATE(79),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [114] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(330),
    [anon_sym_in] = ACTIONS(330),
  },
  [115] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(267),
  },
  [116] = {
    [anon_sym_RBRACE] = ACTIONS(332),
    [anon_sym_inherit] = ACTIONS(330),
    [sym_identifier] = ACTIONS(330),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(12),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_bind_set] = STATE(2),
    [sym_expr_simple] = STATE(12),
    [sym_set_fun] = STATE(12),
    [sym_arg_set] = STATE(89),
    [sym_expr] = STATE(79),
    [sym_expr_parens] = STATE(12),
    [sym_with] = STATE(12),
    [sym_boolean] = STATE(2),
    [sym_uri] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(7),
    [sym_float] = ACTIONS(5),
    [anon_sym_rec] = ACTIONS(9),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(7),
    [sym_integer] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [sym_null] = ACTIONS(17),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [118] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(334),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [17] = {.count = 1, .reusable = false}, SHIFT(2),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_expr_simple, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_expr_simple, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = false}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(24),
  [45] = {.count = 1, .reusable = true}, SHIFT(25),
  [47] = {.count = 1, .reusable = true}, SHIFT(26),
  [49] = {.count = 1, .reusable = false}, SHIFT(27),
  [51] = {.count = 1, .reusable = false}, SHIFT(28),
  [53] = {.count = 1, .reusable = false}, SHIFT(32),
  [55] = {.count = 1, .reusable = false}, SHIFT(34),
  [57] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [59] = {.count = 1, .reusable = false}, SHIFT(33),
  [61] = {.count = 1, .reusable = false}, SHIFT(35),
  [63] = {.count = 1, .reusable = true}, SHIFT(38),
  [65] = {.count = 1, .reusable = false}, SHIFT(39),
  [67] = {.count = 1, .reusable = false}, SHIFT(41),
  [69] = {.count = 1, .reusable = false}, SHIFT(40),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [75] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [77] = {.count = 1, .reusable = true}, SHIFT(42),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(45),
  [83] = {.count = 1, .reusable = false}, SHIFT(44),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_rec_set, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_rec_set, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(46),
  [91] = {.count = 1, .reusable = false}, SHIFT(18),
  [93] = {.count = 1, .reusable = false}, SHIFT(47),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_binding, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(50),
  [99] = {.count = 1, .reusable = true}, SHIFT(51),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [107] = {.count = 1, .reusable = true}, SHIFT(52),
  [109] = {.count = 1, .reusable = true}, SHIFT(53),
  [111] = {.count = 1, .reusable = false}, SHIFT(54),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set_attr, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(57),
  [117] = {.count = 1, .reusable = true}, SHIFT(58),
  [119] = {.count = 1, .reusable = true}, SHIFT(59),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_binding, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(61),
  [125] = {.count = 1, .reusable = false}, SHIFT(63),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 2),
  [131] = {.count = 1, .reusable = false}, SHIFT(67),
  [133] = {.count = 1, .reusable = false}, SHIFT(66),
  [135] = {.count = 1, .reusable = true}, SHIFT(69),
  [137] = {.count = 1, .reusable = true}, SHIFT(70),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 2),
  [143] = {.count = 1, .reusable = false}, SHIFT(74),
  [145] = {.count = 1, .reusable = false}, SHIFT(73),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [182] = {.count = 1, .reusable = false}, SHIFT(76),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expr_let_in_repeat1, 2), SHIFT_REPEAT(18),
  [187] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expr_let_in_repeat1, 2),
  [189] = {.count = 1, .reusable = false}, SHIFT(80),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_expr_parens, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_expr_parens, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 3),
  [197] = {.count = 1, .reusable = true}, SHIFT(81),
  [199] = {.count = 1, .reusable = true}, SHIFT(83),
  [201] = {.count = 1, .reusable = true}, SHIFT(85),
  [203] = {.count = 1, .reusable = false}, SHIFT(88),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(aux_sym_set_repeat1, 2),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(27),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(44),
  [217] = {.count = 1, .reusable = true}, SHIFT(92),
  [219] = {.count = 1, .reusable = true}, SHIFT(91),
  [221] = {.count = 1, .reusable = true}, SHIFT(94),
  [223] = {.count = 1, .reusable = true}, SHIFT(97),
  [225] = {.count = 1, .reusable = true}, SHIFT(98),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 3),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 3),
  [231] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(32),
  [234] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(67),
  [237] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2),
  [239] = {.count = 1, .reusable = false}, SHIFT(99),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_with, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_with, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_bind_set, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_bind_set, 3),
  [249] = {.count = 1, .reusable = true}, SHIFT(100),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 3),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 3),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(39),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(74),
  [261] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_set_fun, 3),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_set_fun, 3),
  [267] = {.count = 1, .reusable = true}, SHIFT(101),
  [269] = {.count = 1, .reusable = true}, SHIFT(102),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_expr_let_in, 4),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_expr_let_in, 4),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 4),
  [277] = {.count = 1, .reusable = false}, SHIFT(105),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_inherit, 3),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_inherit, 3),
  [283] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [286] = {.count = 1, .reusable = true}, SHIFT(106),
  [288] = {.count = 1, .reusable = true}, SHIFT(109),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set_attr, 3),
  [292] = {.count = 1, .reusable = true}, SHIFT(110),
  [294] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_set_repeat1, 2),
  [296] = {.count = 1, .reusable = true}, SHIFT(111),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_set_repeat1, 2), SHIFT_REPEAT(112),
  [301] = {.count = 1, .reusable = false}, SHIFT(113),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_string_interp, 3),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_fun_arg, 2),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_fun_arg, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_binding, 4),
  [311] = {.count = 1, .reusable = true}, SHIFT(114),
  [313] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binding_anon_fun_repeat1, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(aux_sym_binding_anon_fun_repeat1, 2),
  [317] = {.count = 2, .reusable = false}, REDUCE(aux_sym_binding_anon_fun_repeat1, 2), SHIFT_REPEAT(115),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_binding, 4),
  [322] = {.count = 1, .reusable = true}, SHIFT(116),
  [324] = {.count = 1, .reusable = false}, SHIFT(117),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 5),
  [328] = {.count = 1, .reusable = true}, SHIFT(118),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_binding_anon_fun, 5),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_binding_anon_fun, 5),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 6),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nix() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
