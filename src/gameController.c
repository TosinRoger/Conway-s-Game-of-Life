#include "gameController.h"

void fillRandomMatrix();

void executeGame(int startX, int startY, int endX, int endY) {
	fillRandomMatrix();
	// ToDo manipula a matrix o necessario, aplica as regras e plot em tela
	printMatringGame(startX, startY, endX, endY, matrixGame);
}

void fillRandomMatrix() {
	int i, j;
	for (i = 0; i < MATRIX_GAME_WIDHT; i++) {
		for (j = 0 ; j < MATRIX_GAME_HEIGHT; j++) {
			int temp = rand() % 2;
			matrixGame[i][j] = temp;
		}
	}
}
