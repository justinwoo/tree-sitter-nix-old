#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 50
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_AT = 11,
  anon_sym_LBRACE = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACE = 14,
  anon_sym_QMARK = 15,
  sym_arg_set_rest = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_string_double_quoted_token2 = 18,
  anon_sym_SQUOTE_SQUOTE = 19,
  anon_sym_DOLLAR_LBRACE = 20,
  anon_sym_DOT = 21,
  anon_sym_rec = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  sym_null = 25,
  sym_identifier = 26,
  sym_integer = 27,
  sym_h_path = 28,
  sym_s_path = 29,
  sym_source_file = 30,
  sym_expr = 31,
  sym_anon_fun = 32,
  sym_set_fun = 33,
  sym_set_bind_fun = 34,
  sym_bind_set_fun = 35,
  sym_arg_set = 36,
  sym_arg_set_attr = 37,
  aux_sym_arg_set_repeat1 = 38,
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
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_QMARK] = "?",
  [sym_arg_set_rest] = "arg_set_rest",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_double_quoted_token2] = "string_double_quoted_token2",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DOT] = ".",
  [anon_sym_rec] = "rec",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_h_path] = "h_path",
  [sym_s_path] = "s_path",
  [sym_source_file] = "source_file",
  [sym_expr] = "expr",
  [sym_anon_fun] = "anon_fun",
  [sym_set_fun] = "set_fun",
  [sym_set_bind_fun] = "set_bind_fun",
  [sym_bind_set_fun] = "bind_set_fun",
  [sym_arg_set] = "arg_set",
  [sym_arg_set_attr] = "arg_set_attr",
  [aux_sym_arg_set_repeat1] = "arg_set_repeat1",
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
  [anon_sym_AT] = {
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
  [aux_sym_string_double_quoted_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
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
  [sym_h_path] = {
    .visible = true,
    .named = true,
  },
  [sym_s_path] = {
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
  [sym_anon_fun] = {
    .visible = true,
    .named = true,
  },
  [sym_set_fun] = {
    .visible = true,
    .named = true,
  },
  [sym_set_bind_fun] = {
    .visible = true,
    .named = true,
  },
  [sym_bind_set_fun] = {
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
  [aux_sym_arg_set_repeat1] = {
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
      if (lookahead == '@')
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
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
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
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '\'')
        ADVANCE(30);
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
        ADVANCE(31);
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
        ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 17:
      if (lookahead == 'a')
        ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'n')
        ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'e')
        ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'u')
        ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'r')
        ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'i')
        ADVANCE(39);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      if (lookahead == '/')
        ADVANCE(40);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
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
        ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead == '>')
        ADVANCE(42);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'l')
        ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 35:
      if (lookahead == 't')
        ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'l')
        ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'c')
        ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'u')
        ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 't')
        ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_arg_set_rest);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_s_path);
      END_STATE();
    case 43:
      if (lookahead == 's')
        ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 45:
      if (lookahead == 'l')
        ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'h')
        ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(49);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(60);
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
        SKIP(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '.')
        ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(60);
      if (lookahead == '?')
        ADVANCE(15);
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
        SKIP(61);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 59},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 58},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 59},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 59},
  [14] = {.lex_state = 59},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 56},
  [17] = {.lex_state = 59},
  [18] = {.lex_state = 58},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 59},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 59},
  [23] = {.lex_state = 59},
  [24] = {.lex_state = 59},
  [25] = {.lex_state = 58},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 58},
  [29] = {.lex_state = 59},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 59},
  [35] = {.lex_state = 56},
  [36] = {.lex_state = 59},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 56},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 56},
  [41] = {.lex_state = 58},
  [42] = {.lex_state = 59},
  [43] = {.lex_state = 56},
  [44] = {.lex_state = 59},
  [45] = {.lex_state = 58},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 56},
  [49] = {.lex_state = 56},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym_h_path] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_s_path] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_arg_set_rest] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [aux_sym_string_double_quoted_token2] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
  },
  [1] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(5),
    [sym_arg_set] = STATE(6),
    [sym_source_file] = STATE(7),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [2] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
  },
  [3] = {
    [sym_arg_set_attr] = STATE(14),
    [anon_sym_COMMA] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(17),
    [sym_arg_set_rest] = ACTIONS(19),
  },
  [4] = {
    [anon_sym_COMMA] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(21),
    [sym_arg_set_rest] = ACTIONS(21),
  },
  [5] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [6] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
  },
  [7] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [8] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(17),
    [sym_arg_set] = STATE(6),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [9] = {
    [sym_arg_set] = STATE(18),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [10] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_arg_set_rest] = ACTIONS(33),
  },
  [11] = {
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym_arg_set_rest] = ACTIONS(35),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(39),
  },
  [13] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(31),
  },
  [14] = {
    [aux_sym_arg_set_repeat1] = STATE(23),
    [anon_sym_COMMA] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_arg_set_rest] = ACTIONS(33),
  },
  [15] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(24),
    [sym_arg_set] = STATE(6),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [16] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
  },
  [17] = {
    [anon_sym_COMMA] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym_arg_set_rest] = ACTIONS(45),
  },
  [18] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(47),
  },
  [19] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
  },
  [20] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(51),
  },
  [21] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(29),
    [sym_arg_set] = STATE(30),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [22] = {
    [sym_arg_set_attr] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym_arg_set_rest] = ACTIONS(55),
  },
  [23] = {
    [aux_sym_arg_set_repeat1] = STATE(34),
    [anon_sym_COMMA] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym_arg_set_rest] = ACTIONS(55),
  },
  [24] = {
    [anon_sym_COMMA] = ACTIONS(59),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym_arg_set_rest] = ACTIONS(59),
  },
  [25] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(61),
  },
  [26] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(36),
    [sym_arg_set] = STATE(6),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [27] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_AT] = ACTIONS(63),
  },
  [28] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_arg_set_rest] = ACTIONS(69),
  },
  [30] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(73),
  },
  [31] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [32] = {
    [anon_sym_COMMA] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym_arg_set_rest] = ACTIONS(77),
  },
  [33] = {
    [sym_arg_set_attr] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_arg_set_rest] = ACTIONS(79),
  },
  [34] = {
    [aux_sym_arg_set_repeat1] = STATE(34),
    [anon_sym_COMMA] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym_arg_set_rest] = ACTIONS(77),
  },
  [35] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(44),
    [sym_arg_set] = STATE(6),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [36] = {
    [anon_sym_COMMA] = ACTIONS(84),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(84),
    [sym_arg_set_rest] = ACTIONS(84),
  },
  [37] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(17),
    [sym_arg_set] = STATE(30),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [38] = {
    [sym_arg_set] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [39] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(24),
    [sym_arg_set] = STATE(30),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [40] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(86),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
  },
  [42] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(90),
  },
  [43] = {
    [sym_arg_set_attr] = STATE(32),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(15),
  },
  [44] = {
    [anon_sym_COMMA] = ACTIONS(92),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_arg_set_rest] = ACTIONS(92),
  },
  [45] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(94),
  },
  [46] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(96),
  },
  [47] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
  },
  [48] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(36),
    [sym_arg_set] = STATE(30),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
  [49] = {
    [sym_bind_set_fun] = STATE(4),
    [sym_anon_fun] = STATE(4),
    [sym_set_fun] = STATE(4),
    [sym_expr] = STATE(44),
    [sym_arg_set] = STATE(30),
    [sym_set_bind_fun] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = true}, SHIFT(10),
  [15] = {.count = 1, .reusable = true}, SHIFT(11),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = true}, SHIFT(19),
  [33] = {.count = 1, .reusable = true}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set_attr, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 2),
  [41] = {.count = 1, .reusable = true}, SHIFT(22),
  [43] = {.count = 1, .reusable = true}, SHIFT(25),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_anon_fun, 3),
  [47] = {.count = 1, .reusable = true}, SHIFT(26),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 3),
  [51] = {.count = 1, .reusable = true}, SHIFT(27),
  [53] = {.count = 1, .reusable = true}, SHIFT(28),
  [55] = {.count = 1, .reusable = true}, SHIFT(31),
  [57] = {.count = 1, .reusable = true}, SHIFT(33),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_set_fun, 3),
  [61] = {.count = 1, .reusable = true}, SHIFT(35),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 4),
  [65] = {.count = 1, .reusable = true}, SHIFT(37),
  [67] = {.count = 1, .reusable = true}, SHIFT(38),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set_attr, 3),
  [71] = {.count = 1, .reusable = true}, SHIFT(39),
  [73] = {.count = 1, .reusable = true}, SHIFT(40),
  [75] = {.count = 1, .reusable = true}, SHIFT(41),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_set_repeat1, 2),
  [79] = {.count = 1, .reusable = true}, SHIFT(42),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_set_repeat1, 2), SHIFT_REPEAT(43),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_bind_set_fun, 5),
  [86] = {.count = 1, .reusable = true}, SHIFT(46),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 5),
  [90] = {.count = 1, .reusable = true}, SHIFT(47),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_set_bind_fun, 5),
  [94] = {.count = 1, .reusable = true}, SHIFT(48),
  [96] = {.count = 1, .reusable = true}, SHIFT(49),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_arg_set, 6),
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
