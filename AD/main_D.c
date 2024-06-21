#include "header.h"

int main() {

	int** table;
	int way[SIZE], visit[SIZE];
	table = create_table();
	print_table(table);
	search_D(table, way, visit);

	return 0; 
}