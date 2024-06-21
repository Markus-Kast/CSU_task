#include "header.h"

int** create_table(void) {
	
	int i, j;
	int** table = (int**)malloc(SIZE * sizeof(int*));
	if (table == NULL) { return -1; }
	for (i = 0; i < SIZE; i++){ table[i] = (int*)malloc(SIZE * sizeof(int)); if (table[i] == NULL) { return -1; } }
	for (int i = 0; i < SIZE; ++i) { for (int j = 0; j < SIZE; ++j) { table[i][j] = 0; } }

	for (i = 0; i < SIZE; ++i) { table[0][i] = i; }
	for (i = 0; i < SIZE; ++i) { table[i][0] = i; }

	table[1][2] = 8; table[2][1] = 8;
	table[1][3] = 7; table[3][1] = 7;
	table[1][4] = 5; table[4][1] = 5;
	table[2][5] = 4; table[5][2] = 4;
	table[4][3] = 1; table[3][4] = 1;
	table[5][3] = 9; table[3][5] = 9; 
	table[5][4] = 1; table[4][5] = 1;
	table[1][5] = 2; table[5][1] = 2;

	return table;
}

void print_table(int** table) {

	int i, j;
	for (i = 0; i < SIZE; ++i) {

		printf("\n");
		printf("   ");
		for (j = 0; j < SIZE; ++j) {

			printf("%d  ", table[i][j]);
		}
	}
	printf("\n");
}