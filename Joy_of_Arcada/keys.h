// This table maps key name strings (e.g. "RETURN") to
// numeric HID key codes in the TinyUSB hid.h header file.

const struct {
  char   *name;
  uint8_t code;
} key[] = {
  { "A",               HID_KEY_A               },
  { "B",               HID_KEY_B               },
  { "C",               HID_KEY_C               },
  { "D",               HID_KEY_D               },
  { "E",               HID_KEY_E               },
  { "F",               HID_KEY_F               },
  { "G",               HID_KEY_G               },
  { "H",               HID_KEY_H               },
  { "I",               HID_KEY_I               },
  { "J",               HID_KEY_J               },
  { "K",               HID_KEY_K               },
  { "L",               HID_KEY_L               },
  { "M",               HID_KEY_M               },
  { "N",               HID_KEY_N               },
  { "O",               HID_KEY_O               },
  { "P",               HID_KEY_P               },
  { "Q",               HID_KEY_Q               },
  { "R",               HID_KEY_R               },
  { "S",               HID_KEY_S               },
  { "T",               HID_KEY_T               },
  { "U",               HID_KEY_U               },
  { "V",               HID_KEY_V               },
  { "W",               HID_KEY_W               },
  { "X",               HID_KEY_X               },
  { "Y",               HID_KEY_Y               },
  { "Z",               HID_KEY_Z               },
  { "1",               HID_KEY_1               },
  { "2",               HID_KEY_2               },
  { "3",               HID_KEY_3               },
  { "4",               HID_KEY_4               },
  { "5",               HID_KEY_5               },
  { "6",               HID_KEY_6               },
  { "7",               HID_KEY_7               },
  { "8",               HID_KEY_8               },
  { "9",               HID_KEY_9               },
  { "0",               HID_KEY_0               },
  { "RETURN",          HID_KEY_RETURN          },
  { "ESCAPE",          HID_KEY_ESCAPE          },
  { "BACKSPACE",       HID_KEY_BACKSPACE       },
  { "TAB",             HID_KEY_TAB             },
  { "SPACE",           HID_KEY_SPACE           },
  { "MINUS",           HID_KEY_MINUS           },
  { "EQUAL",           HID_KEY_EQUAL           },
  { "LEFT_BRACKET",    HID_KEY_BRACKET_LEFT    },
  { "RIGHT_BRACKET",   HID_KEY_BRACKET_RIGHT   },
  { "BACKSLASH",       HID_KEY_BACKSLASH       },
  { "EUROPE_1",        HID_KEY_EUROPE_1        },
  { "SEMICOLON",       HID_KEY_SEMICOLON       },
  { "APOSTROPHE",      HID_KEY_APOSTROPHE      },
  { "GRAVE",           HID_KEY_GRAVE           },
  { "COMMA",           HID_KEY_COMMA           },
  { "PERIOD",          HID_KEY_PERIOD          },
  { "SLASH",           HID_KEY_SLASH           },
  { "CAPS_LOCK",       HID_KEY_CAPS_LOCK       },
  { "F1",              HID_KEY_F1              },
  { "F2",              HID_KEY_F2              },
  { "F3",              HID_KEY_F3              },
  { "F4",              HID_KEY_F4              },
  { "F5",              HID_KEY_F5              },
  { "F6",              HID_KEY_F6              },
  { "F7",              HID_KEY_F7              },
  { "F8",              HID_KEY_F8              },
  { "F9",              HID_KEY_F9              },
  { "F10",             HID_KEY_F10             },
  { "F11",             HID_KEY_F11             },
  { "F12",             HID_KEY_F12             },
  { "PRINT_SCREEN",    HID_KEY_PRINT_SCREEN    },
  { "SCROLL_LOCK",     HID_KEY_SCROLL_LOCK     },
  { "PAUSE",           HID_KEY_PAUSE           },
  { "INSERT",          HID_KEY_INSERT          },
  { "HOME",            HID_KEY_HOME            },
  { "PAGE_UP",         HID_KEY_PAGE_UP         },
  { "DELETE",          HID_KEY_DELETE          },
  { "END",             HID_KEY_END             },
  { "PAGE_DOWN",       HID_KEY_PAGE_DOWN       },
  { "RIGHT_ARROW",     HID_KEY_ARROW_RIGHT     },
  { "LEFT_ARROW",      HID_KEY_ARROW_LEFT      },
  { "DOWN_ARROW",      HID_KEY_ARROW_DOWN      },
  { "UP_ARROW",        HID_KEY_ARROW_UP        },
  { "NUM_LOCK",        HID_KEY_NUM_LOCK        },
  { "KEYPAD_DIVIDE",   HID_KEY_KEYPAD_DIVIDE   },
  { "KEYPAD_MULTIPLY", HID_KEY_KEYPAD_MULTIPLY },
  { "KEYPAD_SUBTRACT", HID_KEY_KEYPAD_SUBTRACT },
  { "KEYPAD_ADD",      HID_KEY_KEYPAD_ADD      },
  { "KEYPAD_ENTER",    HID_KEY_KEYPAD_ENTER    },
  { "KEYPAD_1",        HID_KEY_KEYPAD_1        },
  { "KEYPAD_2",        HID_KEY_KEYPAD_2        },
  { "KEYPAD_3",        HID_KEY_KEYPAD_3        },
  { "KEYPAD_4",        HID_KEY_KEYPAD_4        },
  { "KEYPAD_5",        HID_KEY_KEYPAD_5        },
  { "KEYPAD_6",        HID_KEY_KEYPAD_6        },
  { "KEYPAD_7",        HID_KEY_KEYPAD_7        },
  { "KEYPAD_8",        HID_KEY_KEYPAD_8        },
  { "KEYPAD_9",        HID_KEY_KEYPAD_9        },
  { "KEYPAD_0",        HID_KEY_KEYPAD_0        },
  { "KEYPAD_DECIMAL",  HID_KEY_KEYPAD_DECIMAL  },
  { "EUROPE_2",        HID_KEY_EUROPE_2        },
  { "APPLICATION",     HID_KEY_APPLICATION     },
  { "POWER",           HID_KEY_POWER           },
  { "KEYPAD_EQUAL",    HID_KEY_KEYPAD_EQUAL    },
  { "F13",             HID_KEY_F13             },
  { "F14",             HID_KEY_F14             },
  { "F15",             HID_KEY_F15             },
  { "LEFT_CONTROL",    HID_KEY_CONTROL_LEFT    },
  { "LEFT_SHIFT",      HID_KEY_SHIFT_LEFT      },
  { "LEFT_ALT",        HID_KEY_ALT_LEFT        },
  { "LEFT_GUI",        HID_KEY_GUI_LEFT        },
  { "RIGHT_CONTROL",   HID_KEY_CONTROL_RIGHT   },
  { "RIGHT_SHIFT",     HID_KEY_SHIFT_RIGHT     },
  { "RIGHT_ALT",       HID_KEY_ALT_RIGHT       },
  { "RIGHT_GUI",       HID_KEY_GUI_RIGHT       }
};

#define NUM_KEYS (sizeof(key) / sizeof(key[0]))
