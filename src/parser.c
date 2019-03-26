#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 116
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  anon_sym_inherit = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  sym_null = 27,
  sym_identifier = 28,
  sym_integer = 29,
  sym_float = 30,
  sym_h_path = 31,
  sym_s_path = 32,
  sym_uri = 33,
  sym_source_file = 34,
  sym_expr = 35,
  sym_expr_let_in = 36,
  sym_expr_simple = 37,
  sym_expr_parens = 38,
  sym_with = 39,
  sym_binding_anon_fun = 40,
  sym_fun_arg = 41,
  sym_set_fun = 42,
  sym_arg_set = 43,
  sym_arg_set_attr = 44,
  sym_binding = 45,
  sym_string_double_quoted = 46,
  sym_string_two_quotes = 47,
  sym_string_interp = 48,
  sym_set = 49,
  sym_rec_set = 50,
  sym_inherit = 51,
  sym_boolean = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_expr_let_in_repeat1 = 54,
  aux_sym_binding_anon_fun_repeat1 = 55,
  aux_sym_arg_set_repeat1 = 56,
  aux_sym_string_double_quoted_repeat1 = 57,
  aux_sym_string_two_quotes_repeat1 = 58,
  aux_sym_set_repeat1 = 59,
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
      if (lookahead == 'f')
        ADVANCE(17);
      if (lookahead == 'i')
        ADVANCE(18);
      if (lookahead == 'l')
        ADVANCE(19);
      if (lookahead == 'n')
        ADVANCE(20);
      if (lookahead == 'r')
        ADVANCE(21);
      if (lookahead == 't')
        ADVANCE(22);
      if (lookahead == 'w')
        ADVANCE(23);
      if (lookahead == '{')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '~')
        ADVANCE(26);
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
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
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
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '\'')
        ADVANCE(31);
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
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
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
        ADVANCE(36);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(37);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(43);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      if (lookahead == '/')
        ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 32:
      if (lookahead == '.')
        ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(48);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(50);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(51);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(52);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(53);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_arg_set_rest);
      END_STATE();
    case 46:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_s_path);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(57);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(59);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '/')
        ADVANCE(61);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 63:
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
        ADVANCE(34);
      if (lookahead == '0')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(64);
      if (lookahead == 'l')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'w')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(24);
      if (lookahead == '~')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(63);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'u')
        ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'r')
        ADVANCE(77);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'i')
        ADVANCE(78);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'l')
        ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'l')
        ADVANCE(82);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(83);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'u')
        ADVANCE(84);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 's')
        ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'l')
        ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'h')
        ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':')
        ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 91:
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
        ADVANCE(92);
      if (lookahead == '0')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(64);
      if (lookahead == 'l')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'w')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(24);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '~')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(91);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 92:
      if (lookahead == '.')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(94);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 94:
      if (lookahead == '.')
        ADVANCE(32);
      END_STATE();
    case 95:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(94);
      if (lookahead == 'i')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(97);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(98);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(99);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(100);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(102);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_inherit);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 103:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(104);
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
        ADVANCE(105);
      if (lookahead != 0)
        ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(106);
      if (lookahead == '"' ||
          lookahead == '$')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead == '#')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead))
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == '#')
        ADVANCE(108);
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
        ADVANCE(109);
      if (lookahead != 0)
        ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '\'')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead == '#')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(110);
      END_STATE();
    case 111:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(94);
      if (lookahead == '=')
        ADVANCE(15);
      if (lookahead == '?')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(111);
      END_STATE();
    case 112:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'i')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 113:
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
        SKIP(113);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 63},
  [2] = {.lex_state = 91},
  [3] = {.lex_state = 63},
  [4] = {.lex_state = 93},
  [5] = {.lex_state = 63},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 95},
  [8] = {.lex_state = 103},
  [9] = {.lex_state = 63},
  [10] = {.lex_state = 107},
  [11] = {.lex_state = 91},
  [12] = {.lex_state = 63},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 63},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 111},
  [18] = {.lex_state = 112},
  [19] = {.lex_state = 112},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 63},
  [22] = {.lex_state = 113},
  [23] = {.lex_state = 111},
  [24] = {.lex_state = 91},
  [25] = {.lex_state = 93},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 63},
  [28] = {.lex_state = 95},
  [29] = {.lex_state = 93},
  [30] = {.lex_state = 95},
  [31] = {.lex_state = 63},
  [32] = {.lex_state = 91},
  [33] = {.lex_state = 103},
  [34] = {.lex_state = 93},
  [35] = {.lex_state = 63},
  [36] = {.lex_state = 63},
  [37] = {.lex_state = 63},
  [38] = {.lex_state = 91},
  [39] = {.lex_state = 107},
  [40] = {.lex_state = 63},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 111},
  [43] = {.lex_state = 91},
  [44] = {.lex_state = 63},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 112},
  [47] = {.lex_state = 112},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 91},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 63},
  [53] = {.lex_state = 93},
  [54] = {.lex_state = 93},
  [55] = {.lex_state = 63},
  [56] = {.lex_state = 63},
  [57] = {.lex_state = 91},
  [58] = {.lex_state = 95},
  [59] = {.lex_state = 93},
  [60] = {.lex_state = 93},
  [61] = {.lex_state = 93},
  [62] = {.lex_state = 63},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 91},
  [65] = {.lex_state = 103},
  [66] = {.lex_state = 112},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 91},
  [69] = {.lex_state = 93},
  [70] = {.lex_state = 91},
  [71] = {.lex_state = 107},
  [72] = {.lex_state = 91},
  [73] = {.lex_state = 63},
  [74] = {.lex_state = 63},
  [75] = {.lex_state = 63},
  [76] = {.lex_state = 91},
  [77] = {.lex_state = 63},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 63},
  [80] = {.lex_state = 93},
  [81] = {.lex_state = 63},
  [82] = {.lex_state = 93},
  [83] = {.lex_state = 63},
  [84] = {.lex_state = 112},
  [85] = {.lex_state = 63},
  [86] = {.lex_state = 95},
  [87] = {.lex_state = 63},
  [88] = {.lex_state = 111},
  [89] = {.lex_state = 93},
  [90] = {.lex_state = 93},
  [91] = {.lex_state = 93},
  [92] = {.lex_state = 93},
  [93] = {.lex_state = 112},
  [94] = {.lex_state = 63},
  [95] = {.lex_state = 103},
  [96] = {.lex_state = 63},
  [97] = {.lex_state = 107},
  [98] = {.lex_state = 63},
  [99] = {.lex_state = 63},
  [100] = {.lex_state = 63},
  [101] = {.lex_state = 112},
  [102] = {.lex_state = 63},
  [103] = {.lex_state = 95},
  [104] = {.lex_state = 112},
  [105] = {.lex_state = 63},
  [106] = {.lex_state = 63},
  [107] = {.lex_state = 63},
  [108] = {.lex_state = 93},
  [109] = {.lex_state = 93},
  [110] = {.lex_state = 63},
  [111] = {.lex_state = 63},
  [112] = {.lex_state = 112},
  [113] = {.lex_state = 95},
  [114] = {.lex_state = 63},
  [115] = {.lex_state = 63},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym_h_path] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_s_path] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arg_set_rest] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_string_double_quoted_token2] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_source_file] = STATE(12),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [2] = {
    [sym_arg_set_rest] = ACTIONS(27),
    [sym_h_path] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_rec] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(29),
    [sym_uri] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(29),
    [sym_float] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_s_path] = ACTIONS(27),
    [anon_sym_with] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [sym_integer] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(27),
  },
  [3] = {
    [sym_set] = STATE(16),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [4] = {
    [sym_binding] = STATE(18),
    [aux_sym_expr_let_in_repeat1] = STATE(18),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(21),
    [sym_expr] = STATE(22),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [6] = {
    [sym_arg_set_rest] = ACTIONS(37),
    [sym_h_path] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_rec] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_let] = ACTIONS(39),
    [sym_uri] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(39),
    [sym_float] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [sym_s_path] = ACTIONS(37),
    [anon_sym_with] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [sym_integer] = ACTIONS(39),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(37),
  },
  [7] = {
    [sym_binding] = STATE(28),
    [aux_sym_set_repeat1] = STATE(28),
    [sym_inherit] = STATE(28),
    [sym_binding_anon_fun] = STATE(30),
    [sym_arg_set_attr] = STATE(29),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(43),
    [sym_arg_set_rest] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_inherit] = ACTIONS(49),
  },
  [8] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(33),
    [sym_string_interp] = STATE(33),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(51),
    [aux_sym_string_double_quoted_token2] = ACTIONS(53),
    [aux_sym_string_double_quoted_token1] = ACTIONS(53),
    [sym_comment] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
  },
  [9] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(35),
    [sym_expr] = STATE(36),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [10] = {
    [aux_sym_string_two_quotes_repeat1] = STATE(39),
    [sym_string_interp] = STATE(39),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(61),
    [aux_sym_string_double_quoted_token2] = ACTIONS(63),
    [aux_sym_string_two_quotes_token1] = ACTIONS(63),
    [sym_comment] = ACTIONS(55),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(65),
  },
  [11] = {
    [sym_arg_set_rest] = ACTIONS(67),
    [sym_h_path] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_rec] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_let] = ACTIONS(69),
    [sym_uri] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(69),
    [sym_float] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym_s_path] = ACTIONS(67),
    [anon_sym_with] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(69),
    [sym_integer] = ACTIONS(69),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [13] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(73),
  },
  [14] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(41),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(41),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [15] = {
    [sym_binding] = STATE(28),
    [sym_inherit] = STATE(28),
    [sym_binding_anon_fun] = STATE(30),
    [aux_sym_set_repeat1] = STATE(28),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_inherit] = ACTIONS(49),
  },
  [16] = {
    [sym_arg_set_rest] = ACTIONS(81),
    [sym_h_path] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_rec] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [sym_uri] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(83),
    [sym_float] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [sym_s_path] = ACTIONS(81),
    [anon_sym_with] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(81),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_binding] = STATE(46),
    [aux_sym_expr_let_in_repeat1] = STATE(46),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(89),
  },
  [19] = {
    [sym_identifier] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(91),
  },
  [20] = {
    [sym_binding] = STATE(47),
    [aux_sym_expr_let_in_repeat1] = STATE(47),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(93),
  },
  [22] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(95),
  },
  [23] = {
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym_arg_set_rest] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [anon_sym_COLON] = ACTIONS(103),
    [sym_arg_set_rest] = ACTIONS(105),
    [sym_h_path] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_rec] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_let] = ACTIONS(107),
    [sym_uri] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(107),
    [sym_float] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [sym_s_path] = ACTIONS(105),
    [anon_sym_with] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [sym_integer] = ACTIONS(107),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(105),
  },
  [25] = {
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [sym_arg_set_rest] = ACTIONS(111),
  },
  [27] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(55),
    [sym_expr] = STATE(56),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(56),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [28] = {
    [sym_binding] = STATE(58),
    [sym_inherit] = STATE(58),
    [sym_binding_anon_fun] = STATE(30),
    [aux_sym_set_repeat1] = STATE(58),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_inherit] = ACTIONS(49),
  },
  [29] = {
    [aux_sym_arg_set_repeat1] = STATE(60),
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_arg_set_rest] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(119),
    [sym_identifier] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_inherit] = ACTIONS(91),
  },
  [31] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(62),
    [sym_expr] = STATE(63),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [32] = {
    [sym_arg_set_rest] = ACTIONS(123),
    [sym_h_path] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_rec] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_let] = ACTIONS(125),
    [sym_uri] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(125),
    [sym_float] = ACTIONS(123),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [sym_s_path] = ACTIONS(123),
    [anon_sym_with] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(125),
    [sym_integer] = ACTIONS(125),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(123),
  },
  [33] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(65),
    [sym_string_interp] = STATE(65),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(51),
    [aux_sym_string_double_quoted_token2] = ACTIONS(127),
    [aux_sym_string_double_quoted_token1] = ACTIONS(127),
    [sym_comment] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(129),
  },
  [34] = {
    [sym_binding] = STATE(66),
    [aux_sym_expr_let_in_repeat1] = STATE(66),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(131),
  },
  [36] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(133),
  },
  [37] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(62),
    [sym_expr] = STATE(69),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [38] = {
    [sym_arg_set_rest] = ACTIONS(135),
    [sym_h_path] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_rec] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_let] = ACTIONS(137),
    [sym_uri] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(137),
    [sym_float] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [sym_s_path] = ACTIONS(135),
    [anon_sym_with] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(137),
    [sym_integer] = ACTIONS(137),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(135),
  },
  [39] = {
    [aux_sym_string_two_quotes_repeat1] = STATE(71),
    [sym_string_interp] = STATE(71),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(61),
    [aux_sym_string_double_quoted_token2] = ACTIONS(139),
    [aux_sym_string_two_quotes_token1] = ACTIONS(139),
    [sym_comment] = ACTIONS(55),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(141),
  },
  [40] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [41] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(41),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(41),
    [sym_h_path] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(146),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_rec] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(152),
    [sym_uri] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(158),
    [sym_float] = ACTIONS(143),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym_s_path] = ACTIONS(143),
    [anon_sym_with] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(158),
    [sym_integer] = ACTIONS(146),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(172),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym_arg_set_rest] = ACTIONS(105),
    [sym_h_path] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_rec] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_let] = ACTIONS(107),
    [sym_uri] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(107),
    [sym_float] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [sym_s_path] = ACTIONS(105),
    [anon_sym_with] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [sym_integer] = ACTIONS(107),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(105),
  },
  [44] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_fun_arg] = STATE(74),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [aux_sym_binding_anon_fun_repeat1] = STATE(74),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(35),
    [sym_expr] = STATE(75),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(175),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [45] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(76),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [46] = {
    [sym_binding] = STATE(46),
    [aux_sym_expr_let_in_repeat1] = STATE(46),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(180),
  },
  [47] = {
    [sym_binding] = STATE(46),
    [aux_sym_expr_let_in_repeat1] = STATE(46),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(182),
  },
  [48] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(21),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [49] = {
    [sym_arg_set_rest] = ACTIONS(184),
    [sym_h_path] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(184),
    [sym_identifier] = ACTIONS(186),
    [anon_sym_rec] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_let] = ACTIONS(186),
    [sym_uri] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_false] = ACTIONS(186),
    [sym_float] = ACTIONS(184),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [sym_s_path] = ACTIONS(184),
    [anon_sym_with] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(186),
    [sym_integer] = ACTIONS(186),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(184),
  },
  [50] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_fun_arg] = STATE(78),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [aux_sym_binding_anon_fun_repeat1] = STATE(78),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(35),
    [sym_expr] = STATE(79),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(175),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [51] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(81),
    [sym_expr] = STATE(82),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [52] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(190),
  },
  [53] = {
    [anon_sym_RBRACE] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_binding] = STATE(84),
    [aux_sym_expr_let_in_repeat1] = STATE(84),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(194),
  },
  [56] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(55),
    [sym_expr] = STATE(87),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(87),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [57] = {
    [sym_arg_set_rest] = ACTIONS(198),
    [sym_h_path] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
    [anon_sym_rec] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_let] = ACTIONS(200),
    [sym_uri] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_false] = ACTIONS(200),
    [sym_float] = ACTIONS(198),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
    [sym_s_path] = ACTIONS(198),
    [anon_sym_with] = ACTIONS(200),
    [anon_sym_true] = ACTIONS(200),
    [sym_integer] = ACTIONS(200),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(198),
  },
  [58] = {
    [sym_binding] = STATE(58),
    [sym_inherit] = STATE(58),
    [sym_binding_anon_fun] = STATE(30),
    [aux_sym_set_repeat1] = STATE(58),
    [anon_sym_RBRACE] = ACTIONS(202),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
    [anon_sym_inherit] = ACTIONS(207),
  },
  [59] = {
    [sym_arg_set_attr] = STATE(90),
    [sym_identifier] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(192),
    [sym_arg_set_rest] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [aux_sym_arg_set_repeat1] = STATE(92),
    [anon_sym_RBRACE] = ACTIONS(192),
    [sym_arg_set_rest] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym_binding] = STATE(93),
    [aux_sym_expr_let_in_repeat1] = STATE(93),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(216),
  },
  [63] = {
    [anon_sym_RBRACE] = ACTIONS(218),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym_arg_set_rest] = ACTIONS(220),
    [sym_h_path] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(220),
    [sym_identifier] = ACTIONS(222),
    [anon_sym_rec] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_let] = ACTIONS(222),
    [sym_uri] = ACTIONS(220),
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_false] = ACTIONS(222),
    [sym_float] = ACTIONS(220),
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [sym_s_path] = ACTIONS(220),
    [anon_sym_with] = ACTIONS(222),
    [anon_sym_true] = ACTIONS(222),
    [sym_integer] = ACTIONS(222),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(220),
  },
  [65] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(65),
    [sym_string_interp] = STATE(65),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(224),
    [aux_sym_string_double_quoted_token2] = ACTIONS(227),
    [aux_sym_string_double_quoted_token1] = ACTIONS(227),
    [sym_comment] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(230),
  },
  [66] = {
    [sym_binding] = STATE(46),
    [aux_sym_expr_let_in_repeat1] = STATE(46),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(232),
  },
  [67] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(35),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [68] = {
    [sym_arg_set_rest] = ACTIONS(234),
    [sym_h_path] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [anon_sym_rec] = ACTIONS(236),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_let] = ACTIONS(236),
    [sym_uri] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_false] = ACTIONS(236),
    [sym_float] = ACTIONS(234),
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(234),
    [sym_s_path] = ACTIONS(234),
    [anon_sym_with] = ACTIONS(236),
    [anon_sym_true] = ACTIONS(236),
    [sym_integer] = ACTIONS(236),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(234),
  },
  [69] = {
    [anon_sym_RBRACE] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym_arg_set_rest] = ACTIONS(240),
    [sym_h_path] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(240),
    [sym_identifier] = ACTIONS(242),
    [anon_sym_rec] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_let] = ACTIONS(242),
    [sym_uri] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_false] = ACTIONS(242),
    [sym_float] = ACTIONS(240),
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(240),
    [sym_s_path] = ACTIONS(240),
    [anon_sym_with] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(242),
    [sym_integer] = ACTIONS(242),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(240),
  },
  [71] = {
    [aux_sym_string_two_quotes_repeat1] = STATE(71),
    [sym_string_interp] = STATE(71),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(244),
    [aux_sym_string_double_quoted_token2] = ACTIONS(247),
    [aux_sym_string_two_quotes_token1] = ACTIONS(247),
    [sym_comment] = ACTIONS(55),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(250),
  },
  [72] = {
    [sym_arg_set_rest] = ACTIONS(252),
    [sym_h_path] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(252),
    [sym_identifier] = ACTIONS(254),
    [anon_sym_rec] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_let] = ACTIONS(254),
    [sym_uri] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_false] = ACTIONS(254),
    [sym_float] = ACTIONS(252),
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [sym_s_path] = ACTIONS(252),
    [anon_sym_with] = ACTIONS(254),
    [anon_sym_true] = ACTIONS(254),
    [sym_integer] = ACTIONS(254),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(252),
  },
  [73] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(27),
  },
  [74] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_fun_arg] = STATE(99),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [aux_sym_binding_anon_fun_repeat1] = STATE(99),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(35),
    [sym_expr] = STATE(100),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(175),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [75] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(258),
  },
  [76] = {
    [sym_arg_set_rest] = ACTIONS(260),
    [sym_h_path] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(260),
    [sym_identifier] = ACTIONS(262),
    [anon_sym_rec] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_let] = ACTIONS(262),
    [sym_uri] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_false] = ACTIONS(262),
    [sym_float] = ACTIONS(260),
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(260),
    [sym_s_path] = ACTIONS(260),
    [anon_sym_with] = ACTIONS(262),
    [anon_sym_true] = ACTIONS(262),
    [sym_integer] = ACTIONS(262),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(260),
  },
  [77] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(21),
    [sym_expr] = STATE(76),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [78] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_fun_arg] = STATE(99),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [aux_sym_binding_anon_fun_repeat1] = STATE(99),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(35),
    [sym_expr] = STATE(102),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(175),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [79] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(264),
  },
  [80] = {
    [sym_binding] = STATE(104),
    [aux_sym_expr_let_in_repeat1] = STATE(104),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(266),
  },
  [82] = {
    [anon_sym_RBRACE] = ACTIONS(268),
    [sym_arg_set_rest] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(270),
  },
  [84] = {
    [sym_binding] = STATE(46),
    [aux_sym_expr_let_in_repeat1] = STATE(46),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(272),
  },
  [85] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(55),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [86] = {
    [anon_sym_RBRACE] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym_comment] = ACTIONS(3),
    [anon_sym_inherit] = ACTIONS(276),
  },
  [87] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(55),
    [sym_expr] = STATE(87),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(87),
    [sym_h_path] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(146),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_rec] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(158),
    [sym_float] = ACTIONS(143),
    [sym_uri] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym_s_path] = ACTIONS(143),
    [anon_sym_with] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(158),
    [sym_integer] = ACTIONS(146),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(172),
  },
  [88] = {
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym_arg_set_rest] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(101),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [anon_sym_RBRACE] = ACTIONS(283),
    [sym_arg_set_rest] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym_arg_set_attr] = STATE(90),
    [sym_identifier] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_arg_set_rest] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [aux_sym_arg_set_repeat1] = STATE(92),
    [anon_sym_RBRACE] = ACTIONS(283),
    [sym_arg_set_rest] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [sym_binding] = STATE(46),
    [aux_sym_expr_let_in_repeat1] = STATE(46),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(290),
  },
  [94] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(62),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [95] = {
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(292),
    [aux_sym_string_double_quoted_token2] = ACTIONS(292),
    [aux_sym_string_double_quoted_token1] = ACTIONS(292),
    [sym_comment] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(292),
  },
  [96] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(35),
    [sym_expr] = STATE(76),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [97] = {
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(292),
    [aux_sym_string_double_quoted_token2] = ACTIONS(292),
    [aux_sym_string_two_quotes_token1] = ACTIONS(292),
    [sym_comment] = ACTIONS(55),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(292),
  },
  [98] = {
    [sym_h_path] = ACTIONS(294),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(296),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_rec] = ACTIONS(296),
    [anon_sym_let] = ACTIONS(296),
    [sym_uri] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_false] = ACTIONS(296),
    [sym_float] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [sym_s_path] = ACTIONS(294),
    [anon_sym_with] = ACTIONS(296),
    [anon_sym_true] = ACTIONS(296),
    [sym_integer] = ACTIONS(296),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(294),
  },
  [99] = {
    [sym_fun_arg] = STATE(99),
    [aux_sym_binding_anon_fun_repeat1] = STATE(99),
    [sym_h_path] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(300),
    [sym_identifier] = ACTIONS(302),
    [anon_sym_rec] = ACTIONS(300),
    [anon_sym_let] = ACTIONS(300),
    [sym_uri] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_false] = ACTIONS(300),
    [sym_float] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [sym_s_path] = ACTIONS(298),
    [anon_sym_with] = ACTIONS(300),
    [anon_sym_true] = ACTIONS(300),
    [sym_integer] = ACTIONS(300),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(298),
  },
  [100] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(305),
  },
  [101] = {
    [sym_identifier] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(307),
  },
  [102] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(309),
  },
  [103] = {
    [anon_sym_RBRACE] = ACTIONS(311),
    [sym_identifier] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [anon_sym_inherit] = ACTIONS(307),
  },
  [104] = {
    [sym_binding] = STATE(46),
    [aux_sym_expr_let_in_repeat1] = STATE(46),
    [sym_binding_anon_fun] = STATE(19),
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(313),
  },
  [105] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(81),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [106] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(55),
    [sym_expr] = STATE(76),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [107] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(315),
  },
  [108] = {
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [sym_arg_set_attr] = STATE(90),
    [sym_identifier] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(62),
    [sym_expr] = STATE(76),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [111] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(256),
  },
  [112] = {
    [sym_identifier] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [anon_sym_in] = ACTIONS(319),
  },
  [113] = {
    [anon_sym_RBRACE] = ACTIONS(321),
    [sym_identifier] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [anon_sym_inherit] = ACTIONS(319),
  },
  [114] = {
    [sym_set] = STATE(2),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(2),
    [sym_string_double_quoted] = STATE(2),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(2),
    [sym_arg_set] = STATE(81),
    [sym_expr] = STATE(76),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [sym_h_path] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_null] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_rec] = ACTIONS(9),
    [sym_uri] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [sym_float] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_s_path] = ACTIONS(5),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(15),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(25),
  },
  [115] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(323),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_expr_simple, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_expr_simple, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, SHIFT(20),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [41] = {.count = 1, .reusable = false}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, SHIFT(24),
  [45] = {.count = 1, .reusable = true}, SHIFT(25),
  [47] = {.count = 1, .reusable = true}, SHIFT(26),
  [49] = {.count = 1, .reusable = false}, SHIFT(27),
  [51] = {.count = 1, .reusable = false}, SHIFT(31),
  [53] = {.count = 1, .reusable = false}, SHIFT(33),
  [55] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [57] = {.count = 1, .reusable = false}, SHIFT(32),
  [59] = {.count = 1, .reusable = false}, SHIFT(34),
  [61] = {.count = 1, .reusable = false}, SHIFT(37),
  [63] = {.count = 1, .reusable = false}, SHIFT(39),
  [65] = {.count = 1, .reusable = false}, SHIFT(38),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [71] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = true}, SHIFT(40),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(42),
  [79] = {.count = 1, .reusable = true}, SHIFT(43),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_rec_set, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_rec_set, 2),
  [85] = {.count = 1, .reusable = true}, SHIFT(44),
  [87] = {.count = 1, .reusable = false}, SHIFT(17),
  [89] = {.count = 1, .reusable = false}, SHIFT(45),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_binding, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(48),
  [95] = {.count = 1, .reusable = true}, SHIFT(49),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set_attr, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(50),
  [101] = {.count = 1, .reusable = true}, SHIFT(51),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 2),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(52),
  [111] = {.count = 1, .reusable = true}, SHIFT(53),
  [113] = {.count = 1, .reusable = false}, SHIFT(54),
  [115] = {.count = 1, .reusable = true}, SHIFT(57),
  [117] = {.count = 1, .reusable = true}, SHIFT(59),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_binding, 1),
  [121] = {.count = 1, .reusable = false}, SHIFT(61),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(65),
  [129] = {.count = 1, .reusable = false}, SHIFT(64),
  [131] = {.count = 1, .reusable = true}, SHIFT(67),
  [133] = {.count = 1, .reusable = true}, SHIFT(68),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 2),
  [139] = {.count = 1, .reusable = false}, SHIFT(71),
  [141] = {.count = 1, .reusable = false}, SHIFT(70),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [161] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [169] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [175] = {.count = 1, .reusable = false}, SHIFT(73),
  [177] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expr_let_in_repeat1, 2), SHIFT_REPEAT(17),
  [180] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expr_let_in_repeat1, 2),
  [182] = {.count = 1, .reusable = false}, SHIFT(77),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_expr_parens, 3),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_expr_parens, 3),
  [188] = {.count = 1, .reusable = false}, SHIFT(80),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 3),
  [192] = {.count = 1, .reusable = true}, SHIFT(83),
  [194] = {.count = 1, .reusable = true}, SHIFT(85),
  [196] = {.count = 1, .reusable = true}, SHIFT(86),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [202] = {.count = 1, .reusable = true}, REDUCE(aux_sym_set_repeat1, 2),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(42),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(27),
  [210] = {.count = 1, .reusable = true}, SHIFT(88),
  [212] = {.count = 1, .reusable = true}, SHIFT(89),
  [214] = {.count = 1, .reusable = true}, SHIFT(91),
  [216] = {.count = 1, .reusable = true}, SHIFT(94),
  [218] = {.count = 1, .reusable = true}, SHIFT(95),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 3),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 3),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(31),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(65),
  [230] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2),
  [232] = {.count = 1, .reusable = false}, SHIFT(96),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_with, 3),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_with, 3),
  [238] = {.count = 1, .reusable = true}, SHIFT(97),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 3),
  [244] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(37),
  [247] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(71),
  [250] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_set_fun, 3),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_set_fun, 3),
  [256] = {.count = 1, .reusable = true}, SHIFT(98),
  [258] = {.count = 1, .reusable = true}, SHIFT(101),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_expr_let_in, 4),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_expr_let_in, 4),
  [264] = {.count = 1, .reusable = true}, SHIFT(103),
  [266] = {.count = 1, .reusable = true}, SHIFT(105),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set_attr, 3),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 4),
  [272] = {.count = 1, .reusable = false}, SHIFT(106),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_inherit, 3),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_inherit, 3),
  [278] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [281] = {.count = 1, .reusable = true}, SHIFT(107),
  [283] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_set_repeat1, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(108),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_set_repeat1, 2), SHIFT_REPEAT(109),
  [290] = {.count = 1, .reusable = false}, SHIFT(110),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_string_interp, 3),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_fun_arg, 2),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_fun_arg, 2),
  [298] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binding_anon_fun_repeat1, 2),
  [300] = {.count = 1, .reusable = false}, REDUCE(aux_sym_binding_anon_fun_repeat1, 2),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym_binding_anon_fun_repeat1, 2), SHIFT_REPEAT(111),
  [305] = {.count = 1, .reusable = true}, SHIFT(112),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_binding, 4),
  [309] = {.count = 1, .reusable = true}, SHIFT(113),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_binding, 4),
  [313] = {.count = 1, .reusable = false}, SHIFT(114),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 5),
  [317] = {.count = 1, .reusable = true}, SHIFT(115),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_binding_anon_fun, 5),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_binding_anon_fun, 5),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 6),
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
