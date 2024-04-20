#ifndef __UNO_H
#define __UNO_H

#include <math.h>
#include <time.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "extern/matchmaker.h"

#define UNO_ALGO_ID 5
#define UNO_CHEAP_ID 1
#define UNO_RELABEL_P 1.0
#define MIN(X,Y) ( (X) > (Y) ? (Y) : (X) )

void scc(int * col_ids, int * col_ptrs, int * col_to_row, int * row_to_col, int * inactive, int n,
         int ** _scc_ptrs, int ** _scc_nodes, int * scc_count);

void scc_iter(int * col_ids, int * col_ptrs, int * col_to_row, int * row_to_col, int * inactive,
              int n, int v, int * i, int * st, int * st_size, int * index, int * lowlink,
              bool * onstack, int * scc_ptrs, int * scc_nodes, int * scc_count, int * scc_pos);

bool dfs(int * col_ids, int * col_ptrs, int * col_to_row, int * row_to_col, int * inactive,
         bool * visited, int * st, bool * onstack, int * st_size, int n, int v);

void find_cycle(int * col_ids, int * col_ptrs, int * col_to_row, int * row_to_col, int * inactive,
                bool * visited, int * cycle, int * cycle_len, int n, int start);

void uno(int * col_ids, int * col_ptrs, int n, int r, int ** _matchings, int * matching_count);

void uno_iter(int * col_ids, int * col_ptrs, int * col_to_row, int * row_to_col, int * inactive,
              int n, int r, int * matchings, int * matching_count);


#endif
