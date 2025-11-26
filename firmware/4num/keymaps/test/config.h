#pragma once

#undef MATRIX_ROWS
#undef MATRIX_COLS

  /* key matrix size */
  #define MATRIX_ROWS 2
  #define MATRIX_COLS 2

  /* key matrix pins */
  #define MATRIX_ROW_PINS { D2, D3 }
  #define MATRIX_COL_PINS { D8, D9 }

  /* COL2ROW or ROW2COL */
  #define DIODE_DIRECTION COL2ROW

