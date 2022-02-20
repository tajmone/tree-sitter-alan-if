#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_options_kwd = 1,
  aux_sym_option_debug_token1 = 2,
  anon_sym_DOT = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_token1 = 5,
  sym_comment = 6,
  sym_adventure = 7,
  sym__options = 8,
  sym_option_debug = 9,
  sym_string = 10,
  aux_sym__options_repeat1 = 11,
  aux_sym_string_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_options_kwd] = "options_kwd",
  [aux_sym_option_debug_token1] = "option_debug_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_comment] = "comment",
  [sym_adventure] = "adventure",
  [sym__options] = "_options",
  [sym_option_debug] = "option_debug",
  [sym_string] = "string",
  [aux_sym__options_repeat1] = "_options_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_options_kwd] = sym_options_kwd,
  [aux_sym_option_debug_token1] = aux_sym_option_debug_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_comment] = sym_comment,
  [sym_adventure] = sym_adventure,
  [sym__options] = sym__options,
  [sym_option_debug] = sym_option_debug,
  [sym_string] = sym_string,
  [aux_sym__options_repeat1] = aux_sym__options_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(14);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_options_kwd);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_options_kwd);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_option_debug_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
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
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_options_kwd] = ACTIONS(1),
    [aux_sym_option_debug_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_adventure] = STATE(10),
    [sym__options] = STATE(6),
    [sym_string] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_options_kwd] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_option_debug_token1,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    STATE(3), 2,
      sym_option_debug,
      aux_sym__options_repeat1,
  [15] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_option_debug_token1,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    STATE(3), 2,
      sym_option_debug,
      aux_sym__options_repeat1,
  [30] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_option_debug_token1,
    STATE(2), 2,
      sym_option_debug,
      aux_sym__options_repeat1,
  [41] = 4,
    ACTIONS(20), 1,
      anon_sym_DQUOTE,
    ACTIONS(22), 1,
      aux_sym_string_token1,
    ACTIONS(24), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_string_repeat1,
  [54] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_string,
  [67] = 4,
    ACTIONS(24), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      aux_sym_string_token1,
    STATE(9), 1,
      aux_sym_string_repeat1,
  [80] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      aux_sym_option_debug_token1,
      anon_sym_DQUOTE,
  [89] = 4,
    ACTIONS(24), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      aux_sym_string_token1,
    STATE(9), 1,
      aux_sym_string_repeat1,
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
  [116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
  [123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 123,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 137,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adventure, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__options_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__options_repeat1, 2), SHIFT_REPEAT(12),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adventure, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_debug, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adventure, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
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
