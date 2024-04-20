#include "uno.h"

void print_matchings(int * matchings, int matching_count, int n)
{
	int i, j;
	for(i=0; i<matching_count; ++i)
	{
		printf("matching %d: ", i+1);
		for(j=0; j<n; ++j)
			printf("(%d,%d) ", j, matchings[i*n+j]);
		printf("\n");
	}
}

void print_adjacency_list(int * col_ids, int * col_ptrs, int n)
{
	int i, j;
	printf("adjacency list (right vertex set)\n");
	for(i=0; i<n; ++i)
	{
		printf("%d: ", i);
		for(j=col_ptrs[i]; j<col_ptrs[i+1]; ++j)
			printf("%d ", col_ids[j]);	
		printf("\n");
	}
}

void test()
{
	printf("-- uno test --\n");
	// use malloc for big graphs (stack size is limited)
	int n = 3, r = 3;
	int col_ids[7] = {0, 1, 2, 0, 1, 1, 2};
	int col_ptrs[4] = {0, 3, 5, 7};
	int matching_count, *matchings;
	print_adjacency_list(col_ids, col_ptrs, n);
	uno(col_ids, col_ptrs, n, r, &matchings, &matching_count);
	print_matchings(matchings, matching_count, n);
	free(matchings);
}

int main()
{
	test();
	return 0;
}
