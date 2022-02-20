#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_options_kwd_token1 = 1,
  aux_sym_options_kwd_token2 = 2,
  aux_sym_option_debug_token1 = 3,
  anon_sym_DOT = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_string_token1 = 6,
  sym_comment = 7,
  sym_adventure = 8,
  sym__options = 9,
  sym_options_kwd = 10,
  sym_option_debug = 11,
  sym_string = 12,
  aux_sym__options_repeat1 = 13,
  aux_sym_string_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_options_kwd_token1] = "options",
  [aux_sym_options_kwd_token2] = "option",
  [aux_sym_option_debug_token1] = "debug",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_comment] = "comment",
  [sym_adventure] = "adventure",
  [sym__options] = "_options",
  [sym_options_kwd] = "options_kwd",
  [sym_option_debug] = "option_debug",
  [sym_string] = "string",
  [aux_sym__options_repeat1] = "_options_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_options_kwd_token1] = aux_sym_options_kwd_token1,
  [aux_sym_options_kwd_token2] = aux_sym_options_kwd_token2,
  [aux_sym_option_debug_token1] = aux_sym_option_debug_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_comment] = sym_comment,
  [sym_adventure] = sym_adventure,
  [sym__options] = sym__options,
  [sym_options_kwd] = sym_options_kwd,
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
  [aux_sym_options_kwd_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_options_kwd_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_debug_token1] = {
    .visible = true,
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
  [sym_options_kwd] = {
    .visible = true,
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
  [16] = 16,
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
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(4);
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
      ACCEPT_TOKEN(aux_sym_options_kwd_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_options_kwd_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
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
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_options_kwd_token1] = ACTIONS(1),
    [aux_sym_options_kwd_token2] = ACTIONS(1),
    [aux_sym_option_debug_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_adventure] = STATE(11),
    [sym__options] = STATE(5),
    [sym_options_kwd] = STATE(6),
    [sym_string] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_options_kwd_token1] = ACTIONS(7),
    [aux_sym_options_kwd_token2] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_option_debug_token1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    STATE(3), 2,
      sym_option_debug,
      aux_sym__options_repeat1,
  [15] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_option_debug_token1,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    STATE(3), 2,
      sym_option_debug,
      aux_sym__options_repeat1,
  [30] = 4,
    ACTIONS(22), 1,
      anon_sym_DQUOTE,
    ACTIONS(24), 1,
      aux_sym_string_token1,
    ACTIONS(26), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_string_repeat1,
  [43] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_string,
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_option_debug_token1,
    STATE(2), 2,
      sym_option_debug,
      aux_sym__options_repeat1,
  [67] = 4,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      aux_sym_string_token1,
    STATE(8), 1,
      aux_sym_string_repeat1,
  [80] = 4,
    ACTIONS(26), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      aux_sym_string_token1,
    STATE(8), 1,
      aux_sym_string_repeat1,
  [93] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      aux_sym_option_debug_token1,
      anon_sym_DQUOTE,
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym_option_debug_token1,
  [109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
  [123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
  [144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 123,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 137,
  [SMALL_STATE(16)] = 144,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adventure, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__options_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__options_repeat1, 2), SHIFT_REPEAT(15),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adventure, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_debug, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options_kwd, 1),
  [43] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adventure, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
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
