#pragma once

typedef struct {
	int* arr;
	int size;
	int cnt;
}Array;

Array* make_arr(int size);

_Bool add_elemnt(Array* array, int value);

void print_arr(Array* array);

void sort_bubble(Array* array);

void swap(int* a, int* b);