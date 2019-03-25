#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 23
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_DASH = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_string_double_quoted_token1 = 3,
  aux_sym_string_double_quoted_token2 = 4,
  anon_sym_SQUOTE_SQUOTE = 5,
  aux_sym_string_two_quotes_token1 = 6,
  anon_sym_DOLLAR_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_identifier = 9,
  sym_integer = 10,
  sym_float = 11,
  sym_h_path = 12,
  sym_s_path = 13,
  sym_uri = 14,
  sym_source_file = 15,
  sym_expr = 16,
  sym_expr_simple = 17,
  sym_string_double_quoted = 18,
  sym_string_two_quotes = 19,
  sym_string_interp = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_string_double_quoted_repeat1 = 22,
  aux_sym_string_two_quotes_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH] = "-",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_double_quoted_token1] = "string_double_quoted_token1",
  [aux_sym_string_double_quoted_token2] = "string_double_quoted_token2",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [aux_sym_string_two_quotes_token1] = "string_two_quotes_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_h_path] = "h_path",
  [sym_s_path] = "s_path",
  [sym_uri] = "uri",
  [sym_source_file] = "source_file",
  [sym_expr] = "expr",
  [sym_expr_simple] = "expr_simple",
  [sym_string_double_quoted] = "string_double_quoted",
  [sym_string_two_quotes] = "string_two_quotes",
  [sym_string_interp] = "string_interp",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_double_quoted_repeat1] = "string_double_quoted_repeat1",
  [aux_sym_string_two_quotes_repeat1] = "string_two_quotes_repeat1",
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
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_expr_simple] = {
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
  [aux_sym_source_file_repeat1] = {
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
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '_')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '~')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == '{')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\'')
        ADVANCE(16);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      if (lookahead == '/')
        ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(21);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token2);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '/')
        ADVANCE(8);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == ':')
        ADVANCE(21);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_s_path);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(26);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '_')
        ADVANCE(9);
      if (lookahead == '~')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '_')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '~')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 35},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_s_path] = ACTIONS(1),
    [aux_sym_string_double_quoted_token2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_uri] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_h_path] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_string_double_quoted] = STATE(3),
    [sym_expr] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_string_two_quotes] = STATE(3),
    [sym_source_file] = STATE(6),
    [sym_expr_simple] = STATE(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_s_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(5),
    [sym_uri] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_float] = ACTIONS(9),
    [sym_h_path] = ACTIONS(9),
  },
  [2] = {
    [aux_sym_string_two_quotes_repeat1] = STATE(10),
    [sym_string_interp] = STATE(10),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [aux_sym_string_double_quoted_token2] = ACTIONS(17),
    [aux_sym_string_two_quotes_token1] = ACTIONS(19),
  },
  [3] = {
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_s_path] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_integer] = ACTIONS(23),
    [sym_uri] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_float] = ACTIONS(21),
    [sym_h_path] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
  },
  [4] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(13),
    [sym_string_interp] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(27),
    [aux_sym_string_double_quoted_token2] = ACTIONS(29),
    [aux_sym_string_double_quoted_token1] = ACTIONS(31),
  },
  [5] = {
    [sym_string_double_quoted] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_expr] = STATE(14),
    [sym_string_two_quotes] = STATE(3),
    [sym_expr_simple] = STATE(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_s_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(5),
    [sym_uri] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_float] = ACTIONS(9),
    [sym_h_path] = ACTIONS(9),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [7] = {
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_s_path] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_uri] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_h_path] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
  },
  [8] = {
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [sym_s_path] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_integer] = ACTIONS(43),
    [sym_uri] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_float] = ACTIONS(41),
    [sym_h_path] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
  },
  [9] = {
    [sym_string_double_quoted] = STATE(3),
    [sym_expr] = STATE(15),
    [sym_string_two_quotes] = STATE(3),
    [sym_expr_simple] = STATE(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_s_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(5),
    [sym_uri] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_float] = ACTIONS(9),
    [sym_h_path] = ACTIONS(9),
  },
  [10] = {
    [aux_sym_string_two_quotes_repeat1] = STATE(17),
    [sym_string_interp] = STATE(17),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(45),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [aux_sym_string_double_quoted_token2] = ACTIONS(47),
    [aux_sym_string_two_quotes_token1] = ACTIONS(49),
  },
  [11] = {
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
    [sym_s_path] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_integer] = ACTIONS(53),
    [sym_uri] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_float] = ACTIONS(51),
    [sym_h_path] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
  },
  [12] = {
    [sym_string_double_quoted] = STATE(3),
    [sym_expr] = STATE(18),
    [sym_string_two_quotes] = STATE(3),
    [sym_expr_simple] = STATE(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_s_path] = ACTIONS(9),
    [sym_integer] = ACTIONS(5),
    [sym_uri] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_float] = ACTIONS(9),
    [sym_h_path] = ACTIONS(9),
  },
  [13] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(20),
    [sym_string_interp] = STATE(20),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(27),
    [aux_sym_string_double_quoted_token2] = ACTIONS(57),
    [aux_sym_string_double_quoted_token1] = ACTIONS(59),
  },
  [14] = {
    [sym_string_double_quoted] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_expr] = STATE(14),
    [sym_string_two_quotes] = STATE(3),
    [sym_expr_simple] = STATE(7),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(64),
    [sym_s_path] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_integer] = ACTIONS(64),
    [sym_uri] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [sym_float] = ACTIONS(67),
    [sym_h_path] = ACTIONS(67),
  },
  [15] = {
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [16] = {
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [sym_s_path] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_integer] = ACTIONS(79),
    [sym_uri] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_float] = ACTIONS(77),
    [sym_h_path] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
  },
  [17] = {
    [aux_sym_string_two_quotes_repeat1] = STATE(17),
    [sym_string_interp] = STATE(17),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(81),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(83),
    [aux_sym_string_double_quoted_token2] = ACTIONS(86),
    [aux_sym_string_two_quotes_token1] = ACTIONS(89),
  },
  [18] = {
    [anon_sym_RBRACE] = ACTIONS(92),
  },
  [19] = {
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
    [sym_s_path] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_integer] = ACTIONS(96),
    [sym_uri] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_float] = ACTIONS(94),
    [sym_h_path] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
  },
  [20] = {
    [aux_sym_string_double_quoted_repeat1] = STATE(20),
    [sym_string_interp] = STATE(20),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(100),
    [aux_sym_string_double_quoted_token2] = ACTIONS(103),
    [aux_sym_string_double_quoted_token1] = ACTIONS(106),
  },
  [21] = {
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(109),
    [aux_sym_string_double_quoted_token2] = ACTIONS(109),
    [aux_sym_string_two_quotes_token1] = ACTIONS(111),
  },
  [22] = {
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(109),
    [aux_sym_string_double_quoted_token2] = ACTIONS(109),
    [aux_sym_string_double_quoted_token1] = ACTIONS(111),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = false}, SHIFT(9),
  [17] = {.count = 1, .reusable = false}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_expr_simple, 1),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_expr_simple, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [35] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 2),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 2),
  [45] = {.count = 1, .reusable = false}, SHIFT(16),
  [47] = {.count = 1, .reusable = false}, SHIFT(17),
  [49] = {.count = 1, .reusable = true}, SHIFT(17),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 2),
  [55] = {.count = 1, .reusable = false}, SHIFT(19),
  [57] = {.count = 1, .reusable = false}, SHIFT(20),
  [59] = {.count = 1, .reusable = true}, SHIFT(20),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [75] = {.count = 1, .reusable = true}, SHIFT(21),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 3),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 3),
  [81] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2),
  [83] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(9),
  [86] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(17),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(17),
  [92] = {.count = 1, .reusable = true}, SHIFT(22),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 3),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 3),
  [98] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2),
  [100] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(12),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(20),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(20),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_string_interp, 3),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_string_interp, 3),
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
