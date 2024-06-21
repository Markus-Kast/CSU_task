#pragma once 

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 6

int** create_table(void);

void print_table(int** table);

void search_D(int** table, int way[SIZE], int visit[SIZE]);