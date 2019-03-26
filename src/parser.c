#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 116
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_DASH = 1,
  anon_sym_let = 2,
  anon_sym_in = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_with = 6,
  anon_sym_SEMI = 7,
  anon_sym_EQ = 8,
  anon_sym_COLON = 9,
  anon_sym_LBRACE = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACE = 12,
  anon_sym_QMARK = 13,
  sym_arg_set_rest = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_double_quoted_token1 = 16,
  aux_sym_string_double_quoted_token2 = 17,
  anon_sym_SQUOTE_SQUOTE = 18,
  aux_sym_string_two_quotes_token1 = 19,
  anon_sym_DOLLAR_LBRACE = 20,
  anon_sym_DOT = 21,
  anon_sym_rec = 22,
  anon_sym_inherit = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_null = 26,
  sym_identifier = 27,
  sym_integer = 28,
  sym_float = 29,
  sym_h_path = 30,
  sym_s_path = 31,
  sym_uri = 32,
  sym_source_file = 33,
  sym_expr = 34,
  sym_expr_let_in = 35,
  sym_expr_simple = 36,
  sym_expr_parens = 37,
  sym_with = 38,
  sym_binding_anon_fun = 39,
  sym_fun_arg = 40,
  sym_set_fun = 41,
  sym_arg_set = 42,
  sym_arg_set_attr = 43,
  sym_binding = 44,
  sym_string_double_quoted = 45,
  sym_string_two_quotes = 46,
  sym_string_interp = 47,
  sym_set = 48,
  sym_rec_set = 49,
  sym_inherit = 50,
  sym_boolean = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_expr_let_in_repeat1 = 53,
  aux_sym_binding_anon_fun_repeat1 = 54,
  aux_sym_arg_set_repeat1 = 55,
  aux_sym_string_double_quoted_repeat1 = 56,
  aux_sym_string_two_quotes_repeat1 = 57,
  aux_sym_set_repeat1 = 58,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '?')
        ADVANCE(15);
      if (lookahead == 'f')
        ADVANCE(16);
      if (lookahead == 'i')
        ADVANCE(17);
      if (lookahead == 'l')
        ADVANCE(18);
      if (lookahead == 'n')
        ADVANCE(19);
      if (lookahead == 'r')
        ADVANCE(20);
      if (lookahead == 't')
        ADVANCE(21);
      if (lookahead == 'w')
        ADVANCE(22);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '~')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '\'')
        ADVANCE(30);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(36);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(37);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
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
        ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      if (lookahead == '/')
        ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token2);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 31:
      if (lookahead == '.')
        ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(50);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(51);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(52);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_arg_set_rest);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_s_path);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(57);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(59);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '/')
        ADVANCE(60);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(53);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '_')
        ADVANCE(27);
      if (lookahead == 'f')
        ADVANCE(63);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'w')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '~')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'e')
        ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'u')
        ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'e')
        ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'r')
        ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'l')
        ADVANCE(79);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 72:
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'l')
        ADVANCE(81);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'c')
        ADVANCE(82);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'u')
        ADVANCE(83);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 't')
        ADVANCE(84);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 's')
        ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'l')
        ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'h')
        ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == 'e')
        ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':')
        ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(91);
      if (lookahead == 'i')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 91:
      if (lookahead == '.')
        ADVANCE(31);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(95);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(96);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(97);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(98);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_inherit);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 99:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(100);
      if (lookahead != 0)
        ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(13);
      if (lookahead == '_')
        ADVANCE(27);
      if (lookahead == 'f')
        ADVANCE(63);
      if (lookahead == 'l')
        ADVANCE(64);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'w')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '~')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(102);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(69);
      END_STATE();
    case 103:
      if (lookahead == '.')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 104:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(105);
      if (lookahead != 0)
        ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(106);
      END_STATE();
    case 107:
      if (lookahead == '.')
        ADVANCE(91);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 108:
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(91);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '?')
        ADVANCE(15);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      END_STATE();
    case 109:
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      END_STATE();
    case 110:
      if (lookahead == 'i')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 90},
  [3] = {.lex_state = 99},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 102},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 107},
  [10] = {.lex_state = 102},
  [11] = {.lex_state = 102},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 62},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 102},
  [17] = {.lex_state = 108},
  [18] = {.lex_state = 90},
  [19] = {.lex_state = 90},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 90},
  [22] = {.lex_state = 90},
  [23] = {.lex_state = 102},
  [24] = {.lex_state = 62},
  [25] = {.lex_state = 99},
  [26] = {.lex_state = 107},
  [27] = {.lex_state = 62},
  [28] = {.lex_state = 109},
  [29] = {.lex_state = 107},
  [30] = {.lex_state = 62},
  [31] = {.lex_state = 62},
  [32] = {.lex_state = 102},
  [33] = {.lex_state = 62},
  [34] = {.lex_state = 104},
  [35] = {.lex_state = 90},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 108},
  [38] = {.lex_state = 110},
  [39] = {.lex_state = 110},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 107},
  [43] = {.lex_state = 62},
  [44] = {.lex_state = 62},
  [45] = {.lex_state = 62},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 90},
  [49] = {.lex_state = 102},
  [50] = {.lex_state = 108},
  [51] = {.lex_state = 90},
  [52] = {.lex_state = 107},
  [53] = {.lex_state = 90},
  [54] = {.lex_state = 107},
  [55] = {.lex_state = 62},
  [56] = {.lex_state = 90},
  [57] = {.lex_state = 102},
  [58] = {.lex_state = 99},
  [59] = {.lex_state = 110},
  [60] = {.lex_state = 62},
  [61] = {.lex_state = 102},
  [62] = {.lex_state = 110},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 102},
  [65] = {.lex_state = 90},
  [66] = {.lex_state = 102},
  [67] = {.lex_state = 104},
  [68] = {.lex_state = 102},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 62},
  [71] = {.lex_state = 110},
  [72] = {.lex_state = 102},
  [73] = {.lex_state = 110},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 90},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 107},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 90},
  [80] = {.lex_state = 62},
  [81] = {.lex_state = 62},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 62},
  [84] = {.lex_state = 90},
  [85] = {.lex_state = 108},
  [86] = {.lex_state = 90},
  [87] = {.lex_state = 107},
  [88] = {.lex_state = 90},
  [89] = {.lex_state = 110},
  [90] = {.lex_state = 62},
  [91] = {.lex_state = 99},
  [92] = {.lex_state = 62},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 104},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 62},
  [97] = {.lex_state = 102},
  [98] = {.lex_state = 62},
  [99] = {.lex_state = 110},
  [100] = {.lex_state = 62},
  [101] = {.lex_state = 62},
  [102] = {.lex_state = 62},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 90},
  [105] = {.lex_state = 62},
  [106] = {.lex_state = 90},
  [107] = {.lex_state = 107},
  [108] = {.lex_state = 62},
  [109] = {.lex_state = 62},
  [110] = {.lex_state = 110},
  [111] = {.lex_state = 62},
  [112] = {.lex_state = 62},
  [113] = {.lex_state = 90},
  [114] = {.lex_state = 62},
  [115] = {.lex_state = 110},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DOT] = ACTIONS(1),
    [sym_s_path] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_arg_set_rest] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [aux_sym_string_double_quoted_token2] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [sym_h_path] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
  },
  [1] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_source_file] = STATE(12),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [2] = {
    [sym_binding] = STATE(20),
    [aux_sym_set_repeat1] = STATE(20),
    [sym_inherit] = STATE(20),
    [sym_binding_anon_fun] = STATE(22),
    [sym_arg_set_attr] = STATE(21),
    [anon_sym_inherit] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_arg_set_rest] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
  },
  [3] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(25),
    [sym_string_interp] = STATE(25),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(37),
    [aux_sym_string_double_quoted_token2] = ACTIONS(39),
    [aux_sym_string_double_quoted_token1] = ACTIONS(41),
  },
  [4] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(27),
    [sym_expr] = STATE(28),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(43),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [5] = {
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(45),
    [sym_s_path] = ACTIONS(45),
    [anon_sym_with] = ACTIONS(47),
    [sym_h_path] = ACTIONS(45),
    [sym_integer] = ACTIONS(47),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym_arg_set_rest] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
    [sym_null] = ACTIONS(47),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_rec] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(47),
    [sym_uri] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_float] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(47),
  },
  [6] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(30),
    [sym_expr] = STATE(31),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(49),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [7] = {
    [aux_sym_string_two_quotes_repeat1] = STATE(34),
    [sym_string_interp] = STATE(34),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(51),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(53),
    [aux_sym_string_double_quoted_token2] = ACTIONS(55),
    [aux_sym_string_two_quotes_token1] = ACTIONS(57),
  },
  [8] = {
    [sym_set] = STATE(36),
    [anon_sym_LBRACE] = ACTIONS(59),
  },
  [9] = {
    [sym_binding] = STATE(38),
    [aux_sym_expr_let_in_repeat1] = STATE(38),
    [sym_binding_anon_fun] = STATE(39),
    [sym_identifier] = ACTIONS(61),
  },
  [10] = {
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(63),
    [sym_s_path] = ACTIONS(63),
    [anon_sym_with] = ACTIONS(65),
    [sym_h_path] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [sym_arg_set_rest] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_null] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_rec] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_let] = ACTIONS(65),
    [sym_uri] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [sym_float] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(65),
  },
  [11] = {
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_s_path] = ACTIONS(67),
    [anon_sym_with] = ACTIONS(69),
    [sym_h_path] = ACTIONS(67),
    [sym_integer] = ACTIONS(69),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym_arg_set_rest] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_null] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_rec] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_let] = ACTIONS(69),
    [sym_uri] = ACTIONS(67),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [sym_float] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(69),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [13] = {
    [anon_sym_COLON] = ACTIONS(73),
  },
  [14] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(41),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [15] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(43),
    [sym_expr] = STATE(44),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(77),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_s_path] = ACTIONS(79),
    [anon_sym_with] = ACTIONS(81),
    [sym_h_path] = ACTIONS(79),
    [sym_integer] = ACTIONS(81),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(83),
    [sym_arg_set_rest] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_null] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(81),
    [sym_uri] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_float] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
  },
  [17] = {
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(87),
    [sym_arg_set_rest] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(89),
  },
  [18] = {
    [anon_sym_RBRACE] = ACTIONS(91),
  },
  [19] = {
    [sym_arg_set_rest] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(91),
  },
  [20] = {
    [sym_binding] = STATE(51),
    [sym_inherit] = STATE(51),
    [sym_binding_anon_fun] = STATE(22),
    [aux_sym_set_repeat1] = STATE(51),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_inherit] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(97),
  },
  [21] = {
    [aux_sym_arg_set_repeat1] = STATE(53),
    [sym_arg_set_rest] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(91),
  },
  [22] = {
    [sym_identifier] = ACTIONS(101),
    [anon_sym_inherit] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(103),
  },
  [23] = {
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [sym_s_path] = ACTIONS(105),
    [anon_sym_with] = ACTIONS(107),
    [sym_h_path] = ACTIONS(105),
    [sym_integer] = ACTIONS(107),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [sym_arg_set_rest] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [sym_null] = ACTIONS(107),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_rec] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_let] = ACTIONS(107),
    [sym_uri] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [sym_float] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(107),
  },
  [24] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(55),
    [sym_expr] = STATE(56),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(109),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [25] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(58),
    [sym_string_interp] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(37),
    [aux_sym_string_double_quoted_token2] = ACTIONS(113),
    [aux_sym_string_double_quoted_token1] = ACTIONS(115),
  },
  [26] = {
    [sym_binding] = STATE(59),
    [aux_sym_expr_let_in_repeat1] = STATE(59),
    [sym_binding_anon_fun] = STATE(39),
    [sym_identifier] = ACTIONS(61),
  },
  [27] = {
    [anon_sym_COLON] = ACTIONS(117),
  },
  [28] = {
    [anon_sym_RPAREN] = ACTIONS(119),
  },
  [29] = {
    [sym_binding] = STATE(62),
    [aux_sym_expr_let_in_repeat1] = STATE(62),
    [sym_binding_anon_fun] = STATE(39),
    [sym_identifier] = ACTIONS(61),
  },
  [30] = {
    [anon_sym_COLON] = ACTIONS(121),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(123),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [sym_s_path] = ACTIONS(125),
    [anon_sym_with] = ACTIONS(127),
    [sym_h_path] = ACTIONS(125),
    [sym_integer] = ACTIONS(127),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [sym_arg_set_rest] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_null] = ACTIONS(127),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_rec] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_let] = ACTIONS(127),
    [sym_uri] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [sym_float] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(127),
  },
  [33] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(55),
    [sym_expr] = STATE(65),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(109),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [34] = {
    [aux_sym_string_two_quotes_repeat1] = STATE(67),
    [sym_string_interp] = STATE(67),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(53),
    [aux_sym_string_double_quoted_token2] = ACTIONS(131),
    [aux_sym_string_two_quotes_token1] = ACTIONS(133),
  },
  [35] = {
    [sym_binding] = STATE(20),
    [sym_inherit] = STATE(20),
    [sym_binding_anon_fun] = STATE(22),
    [aux_sym_set_repeat1] = STATE(20),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_inherit] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(135),
  },
  [36] = {
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(137),
    [sym_s_path] = ACTIONS(137),
    [anon_sym_with] = ACTIONS(139),
    [sym_h_path] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym_arg_set_rest] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [sym_null] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_rec] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_let] = ACTIONS(139),
    [sym_uri] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(139),
    [sym_float] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(139),
  },
  [37] = {
    [anon_sym_EQ] = ACTIONS(141),
  },
  [38] = {
    [sym_binding] = STATE(71),
    [aux_sym_expr_let_in_repeat1] = STATE(71),
    [sym_binding_anon_fun] = STATE(39),
    [anon_sym_in] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
  },
  [39] = {
    [anon_sym_in] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
  },
  [40] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [41] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(41),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(153),
    [sym_s_path] = ACTIONS(156),
    [anon_sym_with] = ACTIONS(159),
    [sym_h_path] = ACTIONS(156),
    [sym_integer] = ACTIONS(162),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(165),
    [sym_null] = ACTIONS(162),
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_rec] = ACTIONS(170),
    [anon_sym_let] = ACTIONS(173),
    [sym_uri] = ACTIONS(156),
    [sym_identifier] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(176),
    [sym_float] = ACTIONS(156),
    [anon_sym_true] = ACTIONS(176),
  },
  [42] = {
    [sym_binding] = STATE(73),
    [aux_sym_expr_let_in_repeat1] = STATE(73),
    [sym_binding_anon_fun] = STATE(39),
    [sym_identifier] = ACTIONS(61),
  },
  [43] = {
    [anon_sym_COLON] = ACTIONS(179),
  },
  [44] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(43),
    [sym_expr] = STATE(76),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(77),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(23),
  },
  [45] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(78),
    [sym_expr] = STATE(79),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(183),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [46] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_fun_arg] = STATE(81),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [aux_sym_binding_anon_fun_repeat1] = STATE(81),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(30),
    [sym_expr] = STATE(82),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(49),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [47] = {
    [anon_sym_COLON] = ACTIONS(187),
  },
  [48] = {
    [anon_sym_RBRACE] = ACTIONS(189),
  },
  [49] = {
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [sym_s_path] = ACTIONS(191),
    [anon_sym_with] = ACTIONS(193),
    [sym_h_path] = ACTIONS(191),
    [sym_integer] = ACTIONS(193),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [sym_arg_set_rest] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_null] = ACTIONS(193),
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_rec] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_let] = ACTIONS(193),
    [sym_uri] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [sym_float] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(193),
  },
  [50] = {
    [anon_sym_EQ] = ACTIONS(89),
  },
  [51] = {
    [sym_binding] = STATE(51),
    [sym_inherit] = STATE(51),
    [sym_binding_anon_fun] = STATE(22),
    [aux_sym_set_repeat1] = STATE(51),
    [sym_identifier] = ACTIONS(195),
    [anon_sym_inherit] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(201),
  },
  [52] = {
    [sym_arg_set_attr] = STATE(86),
    [sym_identifier] = ACTIONS(203),
    [sym_arg_set_rest] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(189),
  },
  [53] = {
    [aux_sym_arg_set_repeat1] = STATE(88),
    [sym_arg_set_rest] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(189),
  },
  [54] = {
    [sym_binding] = STATE(89),
    [aux_sym_expr_let_in_repeat1] = STATE(89),
    [sym_binding_anon_fun] = STATE(39),
    [sym_identifier] = ACTIONS(61),
  },
  [55] = {
    [anon_sym_COLON] = ACTIONS(209),
  },
  [56] = {
    [anon_sym_RBRACE] = ACTIONS(211),
  },
  [57] = {
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym_s_path] = ACTIONS(213),
    [anon_sym_with] = ACTIONS(215),
    [sym_h_path] = ACTIONS(213),
    [sym_integer] = ACTIONS(215),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [sym_arg_set_rest] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [sym_null] = ACTIONS(215),
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_rec] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_let] = ACTIONS(215),
    [sym_uri] = ACTIONS(213),
    [sym_identifier] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [sym_float] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(215),
  },
  [58] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(58),
    [sym_string_interp] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [aux_sym_string_double_quoted_token2] = ACTIONS(222),
    [aux_sym_string_double_quoted_token1] = ACTIONS(225),
  },
  [59] = {
    [sym_binding] = STATE(71),
    [aux_sym_expr_let_in_repeat1] = STATE(71),
    [sym_binding_anon_fun] = STATE(39),
    [anon_sym_in] = ACTIONS(228),
    [sym_identifier] = ACTIONS(145),
  },
  [60] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(27),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(43),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [61] = {
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(230),
    [sym_s_path] = ACTIONS(230),
    [anon_sym_with] = ACTIONS(232),
    [sym_h_path] = ACTIONS(230),
    [sym_integer] = ACTIONS(232),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [sym_arg_set_rest] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
    [sym_null] = ACTIONS(232),
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_rec] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_let] = ACTIONS(232),
    [sym_uri] = ACTIONS(230),
    [sym_identifier] = ACTIONS(232),
    [anon_sym_false] = ACTIONS(232),
    [sym_float] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_true] = ACTIONS(232),
  },
  [62] = {
    [sym_binding] = STATE(71),
    [aux_sym_expr_let_in_repeat1] = STATE(71),
    [sym_binding_anon_fun] = STATE(39),
    [anon_sym_in] = ACTIONS(234),
    [sym_identifier] = ACTIONS(145),
  },
  [63] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(30),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(49),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [64] = {
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(236),
    [sym_s_path] = ACTIONS(236),
    [anon_sym_with] = ACTIONS(238),
    [sym_h_path] = ACTIONS(236),
    [sym_integer] = ACTIONS(238),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [sym_arg_set_rest] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [sym_null] = ACTIONS(238),
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_rec] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(238),
    [sym_uri] = ACTIONS(236),
    [sym_identifier] = ACTIONS(238),
    [anon_sym_false] = ACTIONS(238),
    [sym_float] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_true] = ACTIONS(238),
  },
  [65] = {
    [anon_sym_RBRACE] = ACTIONS(240),
  },
  [66] = {
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(242),
    [sym_s_path] = ACTIONS(242),
    [anon_sym_with] = ACTIONS(244),
    [sym_h_path] = ACTIONS(242),
    [sym_integer] = ACTIONS(244),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [sym_arg_set_rest] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [sym_null] = ACTIONS(244),
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_rec] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_let] = ACTIONS(244),
    [sym_uri] = ACTIONS(242),
    [sym_identifier] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [sym_float] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(244),
  },
  [67] = {
    [aux_sym_string_two_quotes_repeat1] = STATE(67),
    [sym_string_interp] = STATE(67),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(246),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(248),
    [aux_sym_string_double_quoted_token2] = ACTIONS(251),
    [aux_sym_string_two_quotes_token1] = ACTIONS(254),
  },
  [68] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [sym_s_path] = ACTIONS(79),
    [anon_sym_with] = ACTIONS(81),
    [sym_h_path] = ACTIONS(79),
    [sym_integer] = ACTIONS(81),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_arg_set_rest] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_null] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_rec] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(81),
    [sym_uri] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_float] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
  },
  [69] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_fun_arg] = STATE(95),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [aux_sym_binding_anon_fun_repeat1] = STATE(95),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(30),
    [sym_expr] = STATE(96),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(49),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [70] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(13),
    [sym_expr] = STATE(97),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(21),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [71] = {
    [sym_binding] = STATE(71),
    [aux_sym_expr_let_in_repeat1] = STATE(71),
    [sym_binding_anon_fun] = STATE(39),
    [anon_sym_in] = ACTIONS(257),
    [sym_identifier] = ACTIONS(259),
  },
  [72] = {
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(262),
    [sym_s_path] = ACTIONS(262),
    [anon_sym_with] = ACTIONS(264),
    [sym_h_path] = ACTIONS(262),
    [sym_integer] = ACTIONS(264),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [sym_arg_set_rest] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [sym_null] = ACTIONS(264),
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_rec] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_let] = ACTIONS(264),
    [sym_uri] = ACTIONS(262),
    [sym_identifier] = ACTIONS(264),
    [anon_sym_false] = ACTIONS(264),
    [sym_float] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_true] = ACTIONS(264),
  },
  [73] = {
    [sym_binding] = STATE(71),
    [aux_sym_expr_let_in_repeat1] = STATE(71),
    [sym_binding_anon_fun] = STATE(39),
    [anon_sym_in] = ACTIONS(266),
    [sym_identifier] = ACTIONS(145),
  },
  [74] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(43),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(77),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [75] = {
    [sym_identifier] = ACTIONS(268),
    [anon_sym_inherit] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(270),
  },
  [76] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(43),
    [sym_expr] = STATE(76),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(153),
    [sym_s_path] = ACTIONS(156),
    [anon_sym_with] = ACTIONS(159),
    [sym_h_path] = ACTIONS(156),
    [sym_integer] = ACTIONS(162),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(165),
    [sym_null] = ACTIONS(162),
    [anon_sym_rec] = ACTIONS(170),
    [anon_sym_let] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(168),
    [sym_identifier] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(176),
    [sym_float] = ACTIONS(156),
    [sym_uri] = ACTIONS(156),
    [anon_sym_true] = ACTIONS(176),
  },
  [77] = {
    [sym_binding] = STATE(99),
    [aux_sym_expr_let_in_repeat1] = STATE(99),
    [sym_binding_anon_fun] = STATE(39),
    [sym_identifier] = ACTIONS(61),
  },
  [78] = {
    [anon_sym_COLON] = ACTIONS(275),
  },
  [79] = {
    [sym_arg_set_rest] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
  },
  [80] = {
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(45),
  },
  [81] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_fun_arg] = STATE(102),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [aux_sym_binding_anon_fun_repeat1] = STATE(102),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(30),
    [sym_expr] = STATE(103),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(49),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [82] = {
    [anon_sym_SEMI] = ACTIONS(281),
  },
  [83] = {
    [anon_sym_COLON] = ACTIONS(283),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(285),
  },
  [85] = {
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(87),
    [sym_arg_set_rest] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
  },
  [86] = {
    [sym_arg_set_rest] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
  },
  [87] = {
    [sym_arg_set_attr] = STATE(86),
    [sym_identifier] = ACTIONS(203),
    [sym_arg_set_rest] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(285),
  },
  [88] = {
    [aux_sym_arg_set_repeat1] = STATE(88),
    [sym_arg_set_rest] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(287),
  },
  [89] = {
    [sym_binding] = STATE(71),
    [aux_sym_expr_let_in_repeat1] = STATE(71),
    [sym_binding_anon_fun] = STATE(39),
    [anon_sym_in] = ACTIONS(294),
    [sym_identifier] = ACTIONS(145),
  },
  [90] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(55),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(109),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [91] = {
    [anon_sym_DQUOTE] = ACTIONS(296),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(296),
    [aux_sym_string_double_quoted_token2] = ACTIONS(296),
    [aux_sym_string_double_quoted_token1] = ACTIONS(298),
  },
  [92] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(27),
    [sym_expr] = STATE(97),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(43),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [93] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(30),
    [sym_expr] = STATE(97),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(49),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [94] = {
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(296),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(296),
    [aux_sym_string_double_quoted_token2] = ACTIONS(296),
    [aux_sym_string_two_quotes_token1] = ACTIONS(298),
  },
  [95] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_fun_arg] = STATE(102),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [aux_sym_binding_anon_fun_repeat1] = STATE(102),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(30),
    [sym_expr] = STATE(109),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(49),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(185),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [96] = {
    [anon_sym_SEMI] = ACTIONS(300),
  },
  [97] = {
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [sym_s_path] = ACTIONS(302),
    [anon_sym_with] = ACTIONS(304),
    [sym_h_path] = ACTIONS(302),
    [sym_integer] = ACTIONS(304),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
    [sym_arg_set_rest] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [sym_null] = ACTIONS(304),
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_rec] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_let] = ACTIONS(304),
    [sym_uri] = ACTIONS(302),
    [sym_identifier] = ACTIONS(304),
    [anon_sym_false] = ACTIONS(304),
    [sym_float] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_true] = ACTIONS(304),
  },
  [98] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(43),
    [sym_expr] = STATE(97),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(77),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [99] = {
    [sym_binding] = STATE(71),
    [aux_sym_expr_let_in_repeat1] = STATE(71),
    [sym_binding_anon_fun] = STATE(39),
    [anon_sym_in] = ACTIONS(306),
    [sym_identifier] = ACTIONS(145),
  },
  [100] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(78),
    [sym_expr] = STATE(72),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(183),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [101] = {
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(308),
    [sym_s_path] = ACTIONS(308),
    [anon_sym_with] = ACTIONS(310),
    [sym_h_path] = ACTIONS(308),
    [sym_integer] = ACTIONS(310),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(308),
    [sym_null] = ACTIONS(310),
    [anon_sym_rec] = ACTIONS(310),
    [anon_sym_let] = ACTIONS(310),
    [sym_uri] = ACTIONS(308),
    [sym_identifier] = ACTIONS(310),
    [anon_sym_false] = ACTIONS(310),
    [sym_float] = ACTIONS(308),
    [anon_sym_true] = ACTIONS(310),
  },
  [102] = {
    [sym_fun_arg] = STATE(102),
    [aux_sym_binding_anon_fun_repeat1] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(312),
    [sym_s_path] = ACTIONS(312),
    [anon_sym_with] = ACTIONS(314),
    [sym_h_path] = ACTIONS(312),
    [sym_integer] = ACTIONS(314),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(312),
    [sym_null] = ACTIONS(314),
    [anon_sym_rec] = ACTIONS(314),
    [anon_sym_let] = ACTIONS(314),
    [sym_uri] = ACTIONS(312),
    [sym_identifier] = ACTIONS(316),
    [anon_sym_false] = ACTIONS(314),
    [sym_float] = ACTIONS(312),
    [anon_sym_true] = ACTIONS(314),
  },
  [103] = {
    [anon_sym_SEMI] = ACTIONS(319),
  },
  [104] = {
    [sym_identifier] = ACTIONS(321),
    [anon_sym_inherit] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(323),
  },
  [105] = {
    [anon_sym_COLON] = ACTIONS(325),
  },
  [106] = {
    [anon_sym_RBRACE] = ACTIONS(327),
  },
  [107] = {
    [sym_arg_set_attr] = STATE(86),
    [sym_identifier] = ACTIONS(203),
  },
  [108] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(55),
    [sym_expr] = STATE(97),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(109),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [109] = {
    [anon_sym_SEMI] = ACTIONS(329),
  },
  [110] = {
    [anon_sym_in] = ACTIONS(321),
    [sym_identifier] = ACTIONS(321),
  },
  [111] = {
    [sym_set] = STATE(5),
    [sym_expr_let_in] = STATE(11),
    [sym_rec_set] = STATE(5),
    [sym_string_double_quoted] = STATE(5),
    [sym_string_two_quotes] = STATE(5),
    [sym_expr_simple] = STATE(11),
    [sym_set_fun] = STATE(11),
    [sym_boolean] = STATE(5),
    [sym_arg_set] = STATE(78),
    [sym_expr] = STATE(97),
    [sym_expr_parens] = STATE(11),
    [sym_with] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [anon_sym_with] = ACTIONS(11),
    [sym_h_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_rec] = ACTIONS(19),
    [anon_sym_let] = ACTIONS(183),
    [sym_uri] = ACTIONS(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(23),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(23),
  },
  [112] = {
    [anon_sym_COLON] = ACTIONS(279),
  },
  [113] = {
    [sym_identifier] = ACTIONS(331),
    [anon_sym_inherit] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(333),
  },
  [114] = {
    [anon_sym_COLON] = ACTIONS(335),
  },
  [115] = {
    [anon_sym_in] = ACTIONS(331),
    [sym_identifier] = ACTIONS(331),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(15),
  [27] = {.count = 1, .reusable = false}, SHIFT(17),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = false}, SHIFT(23),
  [37] = {.count = 1, .reusable = false}, SHIFT(24),
  [39] = {.count = 1, .reusable = false}, SHIFT(25),
  [41] = {.count = 1, .reusable = true}, SHIFT(25),
  [43] = {.count = 1, .reusable = false}, SHIFT(26),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_expr_simple, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_expr_simple, 1),
  [49] = {.count = 1, .reusable = false}, SHIFT(29),
  [51] = {.count = 1, .reusable = false}, SHIFT(32),
  [53] = {.count = 1, .reusable = false}, SHIFT(33),
  [55] = {.count = 1, .reusable = false}, SHIFT(34),
  [57] = {.count = 1, .reusable = true}, SHIFT(34),
  [59] = {.count = 1, .reusable = true}, SHIFT(35),
  [61] = {.count = 1, .reusable = true}, SHIFT(37),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_boolean, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [71] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = true}, SHIFT(40),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(42),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_set, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_set, 2),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 2),
  [85] = {.count = 1, .reusable = true}, SHIFT(45),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set_attr, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(46),
  [91] = {.count = 1, .reusable = true}, SHIFT(47),
  [93] = {.count = 1, .reusable = true}, SHIFT(48),
  [95] = {.count = 1, .reusable = false}, SHIFT(50),
  [97] = {.count = 1, .reusable = true}, SHIFT(49),
  [99] = {.count = 1, .reusable = true}, SHIFT(52),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_binding, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_binding, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 2),
  [109] = {.count = 1, .reusable = false}, SHIFT(54),
  [111] = {.count = 1, .reusable = false}, SHIFT(57),
  [113] = {.count = 1, .reusable = false}, SHIFT(58),
  [115] = {.count = 1, .reusable = true}, SHIFT(58),
  [117] = {.count = 1, .reusable = true}, SHIFT(60),
  [119] = {.count = 1, .reusable = true}, SHIFT(61),
  [121] = {.count = 1, .reusable = true}, SHIFT(63),
  [123] = {.count = 1, .reusable = true}, SHIFT(64),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 2),
  [129] = {.count = 1, .reusable = false}, SHIFT(66),
  [131] = {.count = 1, .reusable = false}, SHIFT(67),
  [133] = {.count = 1, .reusable = true}, SHIFT(67),
  [135] = {.count = 1, .reusable = true}, SHIFT(68),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_rec_set, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_rec_set, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(69),
  [143] = {.count = 1, .reusable = false}, SHIFT(70),
  [145] = {.count = 1, .reusable = false}, SHIFT(37),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [168] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [179] = {.count = 1, .reusable = true}, SHIFT(74),
  [181] = {.count = 1, .reusable = true}, SHIFT(75),
  [183] = {.count = 1, .reusable = false}, SHIFT(77),
  [185] = {.count = 1, .reusable = false}, SHIFT(80),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 3),
  [189] = {.count = 1, .reusable = true}, SHIFT(83),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_set, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_set, 3),
  [195] = {.count = 2, .reusable = false}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(50),
  [198] = {.count = 2, .reusable = false}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(15),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_set_repeat1, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(85),
  [205] = {.count = 1, .reusable = true}, SHIFT(84),
  [207] = {.count = 1, .reusable = true}, SHIFT(87),
  [209] = {.count = 1, .reusable = true}, SHIFT(90),
  [211] = {.count = 1, .reusable = true}, SHIFT(91),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2),
  [219] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(24),
  [222] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(58),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(58),
  [228] = {.count = 1, .reusable = false}, SHIFT(92),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_expr_parens, 3),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_expr_parens, 3),
  [234] = {.count = 1, .reusable = false}, SHIFT(93),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_with, 3),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_with, 3),
  [240] = {.count = 1, .reusable = true}, SHIFT(94),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 3),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 3),
  [246] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(33),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(67),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(67),
  [257] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expr_let_in_repeat1, 2),
  [259] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expr_let_in_repeat1, 2), SHIFT_REPEAT(37),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_set_fun, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_set_fun, 3),
  [266] = {.count = 1, .reusable = false}, SHIFT(98),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_inherit, 3),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_inherit, 3),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [275] = {.count = 1, .reusable = true}, SHIFT(100),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set_attr, 3),
  [279] = {.count = 1, .reusable = true}, SHIFT(101),
  [281] = {.count = 1, .reusable = true}, SHIFT(104),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 4),
  [285] = {.count = 1, .reusable = true}, SHIFT(105),
  [287] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_set_repeat1, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(106),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_set_repeat1, 2), SHIFT_REPEAT(107),
  [294] = {.count = 1, .reusable = false}, SHIFT(108),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_string_interp, 3),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_string_interp, 3),
  [300] = {.count = 1, .reusable = true}, SHIFT(110),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_expr_let_in, 4),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_expr_let_in, 4),
  [306] = {.count = 1, .reusable = false}, SHIFT(111),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_fun_arg, 2),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_fun_arg, 2),
  [312] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binding_anon_fun_repeat1, 2),
  [314] = {.count = 1, .reusable = false}, REDUCE(aux_sym_binding_anon_fun_repeat1, 2),
  [316] = {.count = 2, .reusable = false}, REDUCE(aux_sym_binding_anon_fun_repeat1, 2), SHIFT_REPEAT(112),
  [319] = {.count = 1, .reusable = true}, SHIFT(113),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_binding, 4),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_binding, 4),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 5),
  [327] = {.count = 1, .reusable = true}, SHIFT(114),
  [329] = {.count = 1, .reusable = true}, SHIFT(115),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_binding_anon_fun, 5),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_binding_anon_fun, 5),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 6),
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
