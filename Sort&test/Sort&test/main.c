#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <time.h>
#include "sput.h"

void test() {
	Array* array = make_arr(10);
	Array* arr = make_arr(5);
	add_elemnt(arr, -23);
	add_elemnt(arr, -14);
	add_elemnt(arr, -88);
	add_elemnt(arr, -52);

	sort_bubble(arr);
	int b = 0;
	if (arr->arr[0] == -88 && arr->arr[1] == -52 && arr->arr[2] == -23 && arr->arr[3] == -14) {
		b = 1;
	}	
	sput_fail_unless(b == 1, "test 1 norm");


	add_elemnt(array, 23);
	add_elemnt(array, 14);
	add_elemnt(array, 88);
	add_elemnt(array, 52);
	add_elemnt(array, 71);
	add_elemnt(array, 10000);

	sort_bubble(array);
	int a = 0;
	if (array->arr[0] == 14 && array->arr[1] == 23 && array->arr[2] == 52 && array->arr[3] == 71 && array->arr[4] == 88 && array->arr[5] == 10000) {
		a = 1;
	}
	sput_fail_unless(a == 1, "test 2 norm");
}

int main() {
	/*srand(time(NULL));

	Array* array = make_arr(10);
	for (int i = 0; i < 10; i++) {
		_Bool a = add_elemnt(array, rand()%10);
		if (a == 0) {
			printf("LOH!");
			return -1;
		}
	}
	print_arr(array);
	printf("\n");

	sort_bubble(array);
	print_arr(array);*/

	sput_start_testing();
	sput_enter_suite("test");
	sput_run_test(test);
	sput_finish_testing();

	return 0;
}