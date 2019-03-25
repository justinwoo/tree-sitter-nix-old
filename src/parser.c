#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 38
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_DASH = 1,
  anon_sym_let = 2,
  anon_sym_in = 3,
  anon_sym_EQ = 4,
  anon_sym_SEMI = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_string_double_quoted_token1 = 7,
  aux_sym_string_double_quoted_token2 = 8,
  anon_sym_SQUOTE_SQUOTE = 9,
  aux_sym_string_two_quotes_token1 = 10,
  anon_sym_DOLLAR_LBRACE = 11,
  anon_sym_RBRACE = 12,
  sym_identifier = 13,
  sym_integer = 14,
  sym_float = 15,
  sym_h_path = 16,
  sym_s_path = 17,
  sym_uri = 18,
  sym_source_file = 19,
  sym_expr = 20,
  sym_expr_let_in = 21,
  sym_expr_simple = 22,
  sym_binding = 23,
  sym_string_double_quoted = 24,
  sym_string_two_quotes = 25,
  sym_string_interp = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_expr_let_in_repeat1 = 28,
  aux_sym_string_double_quoted_repeat1 = 29,
  aux_sym_string_two_quotes_repeat1 = 30,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH] = "-",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
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
  [sym_expr_let_in] = "expr_let_in",
  [sym_expr_simple] = "expr_simple",
  [sym_binding] = "binding",
  [sym_string_double_quoted] = "string_double_quoted",
  [sym_string_two_quotes] = "string_two_quotes",
  [sym_string_interp] = "string_interp",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expr_let_in_repeat1] = "expr_let_in_repeat1",
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_expr_let_in] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_simple] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_let_in_repeat1] = {
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
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == 'i')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead == '~')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == '{')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '\'')
        ADVANCE(19);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      if (lookahead == '/')
        ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '/')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(27);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(28);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_s_path);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 33:
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
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(16);
      if (lookahead == 'l')
        ADVANCE(34);
      if (lookahead == '~')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == 'e')
        ADVANCE(37);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == 't')
        ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == ':')
        ADVANCE(36);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 41:
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
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(16);
      if (lookahead == 'l')
        ADVANCE(34);
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead == '~')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_double_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$')
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == '$')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_two_quotes_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'')
        ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == 'i')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == ';')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 46},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 51},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 51},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 50},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 33},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_integer] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_h_path] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [aux_sym_string_double_quoted_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [sym_s_path] = ACTIONS(1),
  },
  [1] = {
    [sym_expr_simple] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_expr_let_in] = STATE(6),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr] = STATE(7),
    [sym_string_double_quoted] = STATE(2),
    [sym_source_file] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_uri] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [sym_s_path] = ACTIONS(5),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_uri] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [sym_h_path] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_s_path] = ACTIONS(15),
  },
  [3] = {
    [sym_string_interp] = STATE(11),
    [aux_sym_string_double_quoted_repeat1] = STATE(11),
    [aux_sym_string_double_quoted_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [aux_sym_string_double_quoted_token2] = ACTIONS(25),
  },
  [4] = {
    [sym_binding] = STATE(13),
    [aux_sym_expr_let_in_repeat1] = STATE(13),
    [sym_identifier] = ACTIONS(27),
  },
  [5] = {
    [sym_string_interp] = STATE(16),
    [aux_sym_string_two_quotes_repeat1] = STATE(16),
    [aux_sym_string_two_quotes_token1] = ACTIONS(29),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(31),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(33),
    [aux_sym_string_double_quoted_token2] = ACTIONS(35),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_uri] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [anon_sym_let] = ACTIONS(39),
    [sym_h_path] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_s_path] = ACTIONS(37),
  },
  [7] = {
    [sym_expr_simple] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_expr_let_in] = STATE(6),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr] = STATE(17),
    [sym_string_double_quoted] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_uri] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [sym_s_path] = ACTIONS(5),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_integer] = ACTIONS(47),
    [sym_uri] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_float] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(47),
    [sym_h_path] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_s_path] = ACTIONS(45),
  },
  [10] = {
    [sym_expr_simple] = STATE(6),
    [sym_expr_let_in] = STATE(6),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr] = STATE(19),
    [sym_string_double_quoted] = STATE(2),
    [sym_integer] = ACTIONS(7),
    [sym_uri] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(49),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [sym_s_path] = ACTIONS(5),
  },
  [11] = {
    [sym_string_interp] = STATE(21),
    [aux_sym_string_double_quoted_repeat1] = STATE(21),
    [aux_sym_string_double_quoted_token1] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [aux_sym_string_double_quoted_token2] = ACTIONS(55),
  },
  [12] = {
    [anon_sym_EQ] = ACTIONS(57),
  },
  [13] = {
    [sym_binding] = STATE(24),
    [aux_sym_expr_let_in_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(61),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_uri] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym_float] = ACTIONS(63),
    [anon_sym_let] = ACTIONS(65),
    [sym_h_path] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [sym_s_path] = ACTIONS(63),
  },
  [15] = {
    [sym_expr_simple] = STATE(6),
    [sym_expr_let_in] = STATE(6),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr] = STATE(25),
    [sym_string_double_quoted] = STATE(2),
    [sym_integer] = ACTIONS(7),
    [sym_uri] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(49),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [sym_s_path] = ACTIONS(5),
  },
  [16] = {
    [sym_string_interp] = STATE(27),
    [aux_sym_string_two_quotes_repeat1] = STATE(27),
    [aux_sym_string_two_quotes_token1] = ACTIONS(67),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(69),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(33),
    [aux_sym_string_double_quoted_token2] = ACTIONS(71),
  },
  [17] = {
    [sym_expr_simple] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_expr_let_in] = STATE(6),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr] = STATE(17),
    [sym_string_double_quoted] = STATE(2),
    [sym_integer] = ACTIONS(73),
    [sym_uri] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_float] = ACTIONS(76),
    [anon_sym_let] = ACTIONS(84),
    [sym_h_path] = ACTIONS(76),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(87),
    [sym_identifier] = ACTIONS(73),
    [sym_s_path] = ACTIONS(76),
  },
  [18] = {
    [sym_binding] = STATE(28),
    [aux_sym_expr_let_in_repeat1] = STATE(28),
    [sym_identifier] = ACTIONS(27),
  },
  [19] = {
    [anon_sym_RBRACE] = ACTIONS(90),
  },
  [20] = {
    [anon_sym_SEMI] = ACTIONS(92),
    [sym_integer] = ACTIONS(94),
    [sym_uri] = ACTIONS(92),
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [sym_float] = ACTIONS(92),
    [anon_sym_let] = ACTIONS(94),
    [sym_h_path] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(92),
    [sym_identifier] = ACTIONS(94),
    [sym_s_path] = ACTIONS(92),
  },
  [21] = {
    [sym_string_interp] = STATE(21),
    [aux_sym_string_double_quoted_repeat1] = STATE(21),
    [aux_sym_string_double_quoted_token1] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(101),
    [aux_sym_string_double_quoted_token2] = ACTIONS(104),
  },
  [22] = {
    [sym_expr_simple] = STATE(6),
    [sym_expr_let_in] = STATE(6),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr] = STATE(31),
    [sym_string_double_quoted] = STATE(2),
    [sym_integer] = ACTIONS(7),
    [sym_uri] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(107),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [sym_s_path] = ACTIONS(5),
  },
  [23] = {
    [sym_expr_simple] = STATE(6),
    [sym_expr_let_in] = STATE(6),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr] = STATE(32),
    [sym_string_double_quoted] = STATE(2),
    [sym_integer] = ACTIONS(7),
    [sym_uri] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(11),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [sym_s_path] = ACTIONS(5),
  },
  [24] = {
    [sym_binding] = STATE(24),
    [aux_sym_expr_let_in_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_in] = ACTIONS(112),
  },
  [25] = {
    [anon_sym_RBRACE] = ACTIONS(114),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_integer] = ACTIONS(118),
    [sym_uri] = ACTIONS(116),
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym_float] = ACTIONS(116),
    [anon_sym_let] = ACTIONS(118),
    [sym_h_path] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(116),
    [sym_identifier] = ACTIONS(118),
    [sym_s_path] = ACTIONS(116),
  },
  [27] = {
    [sym_string_interp] = STATE(27),
    [aux_sym_string_two_quotes_repeat1] = STATE(27),
    [aux_sym_string_two_quotes_token1] = ACTIONS(120),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(123),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(125),
    [aux_sym_string_double_quoted_token2] = ACTIONS(128),
  },
  [28] = {
    [sym_binding] = STATE(24),
    [aux_sym_expr_let_in_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(131),
  },
  [29] = {
    [aux_sym_string_double_quoted_token1] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(135),
    [aux_sym_string_double_quoted_token2] = ACTIONS(135),
  },
  [30] = {
    [sym_binding] = STATE(35),
    [aux_sym_expr_let_in_repeat1] = STATE(35),
    [sym_identifier] = ACTIONS(27),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(137),
  },
  [32] = {
    [anon_sym_SEMI] = ACTIONS(139),
    [sym_integer] = ACTIONS(141),
    [sym_uri] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym_float] = ACTIONS(139),
    [anon_sym_let] = ACTIONS(141),
    [sym_h_path] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [sym_s_path] = ACTIONS(139),
  },
  [33] = {
    [aux_sym_string_two_quotes_token1] = ACTIONS(133),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(135),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(135),
    [aux_sym_string_double_quoted_token2] = ACTIONS(135),
  },
  [34] = {
    [sym_expr_simple] = STATE(6),
    [sym_expr_let_in] = STATE(6),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr] = STATE(32),
    [sym_string_double_quoted] = STATE(2),
    [sym_integer] = ACTIONS(7),
    [sym_uri] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(49),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [sym_s_path] = ACTIONS(5),
  },
  [35] = {
    [sym_binding] = STATE(24),
    [aux_sym_expr_let_in_repeat1] = STATE(24),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(143),
  },
  [36] = {
    [sym_identifier] = ACTIONS(145),
    [anon_sym_in] = ACTIONS(145),
  },
  [37] = {
    [sym_expr_simple] = STATE(6),
    [sym_expr_let_in] = STATE(6),
    [sym_string_two_quotes] = STATE(2),
    [sym_expr] = STATE(32),
    [sym_string_double_quoted] = STATE(2),
    [sym_integer] = ACTIONS(7),
    [sym_uri] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(107),
    [sym_h_path] = ACTIONS(5),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(13),
    [sym_identifier] = ACTIONS(7),
    [sym_s_path] = ACTIONS(5),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_expr_simple, 1),
  [17] = {.count = 1, .reusable = false}, REDUCE(sym_expr_simple, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = false}, SHIFT(15),
  [35] = {.count = 1, .reusable = false}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [43] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 2),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 2),
  [49] = {.count = 1, .reusable = false}, SHIFT(18),
  [51] = {.count = 1, .reusable = true}, SHIFT(21),
  [53] = {.count = 1, .reusable = false}, SHIFT(20),
  [55] = {.count = 1, .reusable = false}, SHIFT(21),
  [57] = {.count = 1, .reusable = true}, SHIFT(22),
  [59] = {.count = 1, .reusable = false}, SHIFT(12),
  [61] = {.count = 1, .reusable = false}, SHIFT(23),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(27),
  [69] = {.count = 1, .reusable = false}, SHIFT(26),
  [71] = {.count = 1, .reusable = false}, SHIFT(27),
  [73] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [90] = {.count = 1, .reusable = true}, SHIFT(29),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 3),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 3),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(21),
  [99] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(10),
  [104] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_double_quoted_repeat1, 2), SHIFT_REPEAT(21),
  [107] = {.count = 1, .reusable = false}, SHIFT(30),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expr_let_in_repeat1, 2), SHIFT_REPEAT(12),
  [112] = {.count = 1, .reusable = false}, REDUCE(aux_sym_expr_let_in_repeat1, 2),
  [114] = {.count = 1, .reusable = true}, SHIFT(33),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_string_two_quotes, 3),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_string_two_quotes, 3),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(27),
  [123] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(15),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_two_quotes_repeat1, 2), SHIFT_REPEAT(27),
  [131] = {.count = 1, .reusable = false}, SHIFT(34),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_string_interp, 3),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_string_interp, 3),
  [137] = {.count = 1, .reusable = true}, SHIFT(36),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_expr_let_in, 4),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_expr_let_in, 4),
  [143] = {.count = 1, .reusable = false}, SHIFT(37),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_binding, 4),
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
