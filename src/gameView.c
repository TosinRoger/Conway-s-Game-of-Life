#include "gameView.h"

void printMatringGame(int startX, int startY, int endX, int endY, int matrixGame[MATRIX_GAME_WIDHT][MATRIX_GAME_HEIGHT]) {
	int row, column;
	int lenght = 5;

	for (row = 0; row < endX; row++) {
		for (column = 0; column < endY; column++) {
			if (matrixGame[row][column] == 0) {
				al_draw_filled_rectangle(
		           (row * lenght), 
		           startY + (column * lenght),
		           (row * lenght) + lenght, 
		           startY + (column * lenght) + lenght,
		           WHITE
	       		);
			} else {
				al_draw_filled_rectangle(
		           (row * lenght), 
		           startY + (column * lenght),
		           (row * lenght) + lenght, 
		           startY + (column * lenght) + lenght,
		           BLACK
	       		);
			}
			
		}
	}

}
