#include "gameController.h"

void applyRulesLife();
int countCycleLife = 0;

int executeGame(int startX, int startY, int endX, int endY) {
	printMatringGame(startX, startY, endX, endY, matrixGame);
	applyRulesLife();
	countCycleLife++;

	return countCycleLife;
}

void fillRandomMatrix() {
	int i, j;
	srand(time(0));
	for (i = 0; i < MATRIX_GAME_WIDHT; i++) {
		for (j = 0 ; j < MATRIX_GAME_HEIGHT; j++) {
			int deadOrLive = rand() % 2;
			int aux = rand() % 4;
			if (aux == 0) {
				matrixGame[i][j] = deadOrLive;
			} else {
				matrixGame[i][j] = 0;
			}
		}
	}
}

void applyRulesLife() {
	// If the cell is alive, then it stays alive if it has either 2 or 3 live neighbors
	// If the cell is dead, then it springs to life only in the case that it has 3 live neighbors
	int newMatrix[MATRIX_GAME_WIDHT][MATRIX_GAME_HEIGHT];
	int row, column;

	for (row = 0; row < MATRIX_GAME_WIDHT; row++) {
		for (column = 0; column < MATRIX_GAME_HEIGHT; column++) {
			int countNeighbor = 0;

			if (row > 0 && column > 0 && matrixGame[row - 1][column - 1] == 1) {
				countNeighbor++;
			} 
			if (row > 0 && matrixGame[row - 1][column] == 1) {
				countNeighbor++;
			} 
			if (row > 0 && column < (MATRIX_GAME_WIDHT - 1) && matrixGame[row - 1][column + 1] == 1) {
				countNeighbor++;
			} 
			if (column > 0 && matrixGame[row][column - 1] == 1) {
				countNeighbor++;
			} 
			if (column < (MATRIX_GAME_WIDHT - 1) && matrixGame[row][column + 1] == 1) {
				countNeighbor++;
			} 
			if (row < (MATRIX_GAME_HEIGHT - 1) && column > 0 && matrixGame[row + 1][column - 1] == 1) {
				countNeighbor++;
			}
			 if (row < (MATRIX_GAME_HEIGHT - 1) && matrixGame[row + 1][column] == 1) {
				countNeighbor++;
			}
			 if (row < (MATRIX_GAME_HEIGHT - 1) && column < (MATRIX_GAME_WIDHT - 1) && 	matrixGame[row + 1][column + 1] == 1) {
				countNeighbor++;
			}

			if (matrixGame[row][column] == 1 && (countNeighbor == 2 || countNeighbor == 3)) {
				newMatrix[row][column] = 1;
			} else {
				newMatrix[row][column] = 0;
			}
			if (matrixGame[row][column] == 0 && countNeighbor == 3) {
				newMatrix[row][column] = 1;	
			}
		}
	}

	for (row = 0; row < MATRIX_GAME_WIDHT; row++) {
		for (column = 0; column < MATRIX_GAME_HEIGHT; column++) {
			matrixGame[row][column] = newMatrix[row][column];
		}
	}
}
