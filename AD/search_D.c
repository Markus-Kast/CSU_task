#include "header.h"

#define start 3

void search_D(int** table, int way[SIZE], int visit[SIZE]) {

    if (start >= SIZE) {

        printf("\n   Going beyond table boundaries\n");
    }
    else {

        int i, j;
        for (i = 0; i < SIZE; ++i) { way[i] = 1001; }
        way[0] = 0; way[start] = 0;
        for (i = 0; i < SIZE; ++i) { visit[i] = 0; }
        visit[0] = 1;

        while (1) {

            int min_dist = 1000, start_index = -1;
            for (i = 1; i < SIZE; ++i) {

                if (visit[i] == 0 && way[i] < min_dist) {

                    min_dist = way[i];
                    start_index = i;
                }
            }

            if (start_index == -1) { break; }

            visit[start_index] = 1;

            for (j = 1; j < SIZE; ++j) {

                if (visit[j] == 0 && table[start_index][j] != 0 && (way[start_index] + table[start_index][j] < way[j])) {

                    way[j] = way[start_index] + table[start_index][j];
                }
            }
        }

        printf("\n   S/p | (1)(2)(3)(4)(5)");
        printf("\n    "); for (i = 0; i < SIZE; ++i) { printf("%d  ", way[i]); if (i == 0) { printf("|  "); } }
    }
}