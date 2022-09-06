#include <allegro5/allegro5.h>
#include <allegro5/allegro_primitives.h>
#include <stdlib.h>

#include "constant.h"

#ifndef GAME_VIEW_H
#define GAME_VIEW_H

#define WHITE al_map_rgb(255, 255, 255)
#define BLACK al_map_rgb(0, 0, 0)

void printMatringGame(int startX, int startY, int endX, int endY, int matrixGame[MATRIX_GAME_WIDHT][MATRIX_GAME_HEIGHT]);

#endif
