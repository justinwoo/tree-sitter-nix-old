#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 10
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_DASH = 1,
  anon_sym_DQUOTE = 2,
  sym_string_parts = 3,
  sym_identifier = 4,
  sym_integer = 5,
  sym_float = 6,
  sym_h_path = 7,
  sym_s_path = 8,
  sym_uri = 9,
  sym_source_file = 10,
  sym_expr = 11,
  sym_expr_simple = 12,
  sym_string_double_quoted = 13,
  aux_sym_source_file_repeat1 = 14,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH] = "-",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_parts] = "string_parts",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym_string_parts] = {
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
  [sym_expr_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_string_double_quoted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '_')
        ADVANCE(7);
      if (lookahead == '~')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/')
        ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == '\'' ||
          lookahead == '_')
        ADVANCE(7);
      if (lookahead == '+' ||
          lookahead == '.')
        ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(18);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_s_path);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '\'') ||
          ('*' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_h_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '_')
        ADVANCE(7);
      if (lookahead == '~')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_string_parts);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_string_parts);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_identifier] = ACTIONS(1),
    [sym_s_path] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_uri] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_h_path] = ACTIONS(1),
  },
  [1] = {
    [sym_string_double_quoted] = STATE(2),
    [sym_expr] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_source_file] = STATE(5),
    [sym_expr_simple] = STATE(6),
    [sym_identifier] = ACTIONS(3),
    [sym_s_path] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_integer] = ACTIONS(3),
    [sym_uri] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [sym_h_path] = ACTIONS(5),
  },
  [2] = {
    [sym_identifier] = ACTIONS(11),
    [sym_s_path] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_integer] = ACTIONS(11),
    [sym_uri] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_float] = ACTIONS(13),
    [sym_h_path] = ACTIONS(13),
  },
  [3] = {
    [sym_string_parts] = ACTIONS(15),
  },
  [4] = {
    [sym_string_double_quoted] = STATE(2),
    [sym_expr] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_expr_simple] = STATE(6),
    [sym_identifier] = ACTIONS(3),
    [sym_s_path] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_integer] = ACTIONS(3),
    [sym_uri] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_float] = ACTIONS(5),
    [sym_h_path] = ACTIONS(5),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [6] = {
    [sym_identifier] = ACTIONS(21),
    [sym_s_path] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_integer] = ACTIONS(21),
    [sym_uri] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_h_path] = ACTIONS(23),
  },
  [7] = {
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [8] = {
    [sym_string_double_quoted] = STATE(2),
    [sym_expr] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_expr_simple] = STATE(6),
    [sym_identifier] = ACTIONS(27),
    [sym_s_path] = ACTIONS(30),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_integer] = ACTIONS(27),
    [sym_uri] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_float] = ACTIONS(30),
    [sym_h_path] = ACTIONS(30),
  },
  [9] = {
    [sym_identifier] = ACTIONS(38),
    [sym_s_path] = ACTIONS(40),
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_integer] = ACTIONS(38),
    [sym_uri] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym_float] = ACTIONS(40),
    [sym_h_path] = ACTIONS(40),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, REDUCE(sym_expr_simple, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_expr_simple, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [19] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(9),
  [27] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.count = 1, .reusable = false}, REDUCE(sym_string_double_quoted, 3),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_string_double_quoted, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nix(void) {
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
