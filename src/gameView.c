#include "gameView.h"

void printMatringGame(int startX, int startY, int endX, int endY, int matrixGame[MATRIX_GAME_WIDHT][MATRIX_GAME_HEIGHT]) {
	int row, column;

	for (row = 0; row < MATRIX_GAME_WIDHT; row++) {
		for (column = 0; column < MATRIX_GAME_HEIGHT; column++) {
			if (matrixGame[row][column] == 0) {
				al_draw_filled_rectangle(
		           (row * SIZE_SQUARE), 
		           startY + (column * SIZE_SQUARE),
		           (row * SIZE_SQUARE) + SIZE_SQUARE, 
		           startY + (column * SIZE_SQUARE) + SIZE_SQUARE,
		           BLACK
	       		);
			} else {
				al_draw_filled_rectangle(
		           (row * SIZE_SQUARE), 
		           startY + (column * SIZE_SQUARE),
		           (row * SIZE_SQUARE) + SIZE_SQUARE, 
		           startY + (column * SIZE_SQUARE) + SIZE_SQUARE,
		           WHITE
	       		);
			}
		}
	}

}
