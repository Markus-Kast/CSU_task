#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

Array* make_arr(int size) {
	Array *array;
	array = malloc(sizeof(Array));
	if (array == NULL) {
		printf("LOH!");
		return NULL;
	}

	array->size = size;
	array->cnt = 0;

	array->arr = malloc(sizeof(int)*size);
	if (array->arr == NULL) {
		printf("LOH!");
		return NULL;
	}

	return array;
}

_Bool add_elemnt(Array* array, int value) {
	if (array->cnt > array->size) {
		array->arr = realloc(array->arr, sizeof(int) * (array->cnt + 1));
		array->size = array->cnt + 1;
		if (!array->arr) {
			printf("LOH!");
			return 0;
		}
		*(array->arr + array->size) = value;
	}
	else {
		*(array->arr + array->cnt) = value;
	}
	array->cnt += 1;
	
	return 1;
}

void print_arr(Array* array) {
	for (int i = 0; i < array->cnt; i++) {
		printf("%d ", array->arr[i]);
	}
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort_bubble(Array* array) {
	for (int i = 0; i < array->cnt - 1; i++) {
		for (int j = 0; j < array->cnt - i - 1; j++) {
			if (array->arr[j] > array->arr[j+1]) {
				swap(&array->arr[j], &array->arr[j+1]);
			}
		}
	}
}