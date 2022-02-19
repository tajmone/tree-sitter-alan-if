#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym_options_kwd = 1,
  aux_sym_option_debug_token1 = 2,
  anon_sym_DOT = 3,
  sym_comment = 4,
  sym_adventure = 5,
  sym__options = 6,
  sym_option_debug = 7,
  aux_sym__options_repeat1 = 8,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_options_kwd] = "options_kwd",
  [aux_sym_option_debug_token1] = "option_debug_token1",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [sym_adventure] = "adventure",
  [sym__options] = "_options",
  [sym_option_debug] = "option_debug",
  [aux_sym__options_repeat1] = "_options_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_options_kwd] = sym_options_kwd,
  [aux_sym_option_debug_token1] = aux_sym_option_debug_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [sym_adventure] = sym_adventure,
  [sym__options] = sym__options,
  [sym_option_debug] = sym_option_debug,
  [aux_sym__options_repeat1] = aux_sym__options_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_options_kwd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_option_debug_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_adventure] = {
    .visible = true,
    .named = true,
  },
  [sym__options] = {
    .visible = false,
    .named = true,
  },
  [sym_option_debug] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__options_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_options_kwd);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_options_kwd);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_option_debug_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_options_kwd] = ACTIONS(1),
    [aux_sym_option_debug_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_adventure] = STATE(6),
    [sym__options] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_options_kwd] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_option_debug] = STATE(3),
    [aux_sym__options_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_option_debug_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_option_debug] = STATE(3),
    [aux_sym__options_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym_option_debug_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_option_debug_token1,
    STATE(2), 2,
      sym_option_debug,
      aux_sym__options_repeat1,
  [11] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      aux_sym_option_debug_token1,
  [19] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
  [26] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
  [33] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 19,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 33,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adventure, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__options_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__options_repeat1, 2), SHIFT_REPEAT(8),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_debug, 2),
  [20] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adventure, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_alan_if(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
