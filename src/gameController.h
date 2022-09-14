#include <stdio.h>  
#include <stdlib.h> 

#include "constant.h"
#include "gameView.h"

#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H

int matrixGame[MATRIX_GAME_WIDHT][MATRIX_GAME_HEIGHT];

void fillRandomMatrix();
int executeGame(int startX, int startY, int endX, int endY);

#endif
