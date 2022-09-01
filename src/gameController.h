#include <time.h>
#include <stdlib.h>

#include "gameView.h"

#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H

#define MATRIX_GAME_WIDHT 160
#define MATRIX_GAME_HEIGHT 112

int matrixGame[MATRIX_GAME_WIDHT][MATRIX_GAME_HEIGHT];

void executeGame(int startX, int startY, int endX, int endY);

#endif
