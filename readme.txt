    perfect-matching-enumeration
=====================================
-- functionality --
enumerates perfect matchings (permutations) in a bipartite graph

-- data structure --
graphs are represented in the compressed sparse column format (0-indexed)

-- limitation --
left and right vertex set need to have cardinality n
(necessary condition for any perfect matching to exist)

-- prerequisites --
gcc, make, MatchMaker lib (provided in extern)

-- compilation --
make

-- run example --
./test
(visualized in test.png)

-- references --
Uno, T. (1997). Algorithms for enumerating all perfect, maximum and maximal matchings in bipartite graphs. In: Leong, H.W., Imai, H., Jain, S. (eds) Algorithms and Computation. ISAAC 1997. Lecture Notes in Computer Science, vol 1350. Springer, Berlin, Heidelberg. 
https://doi.org/10.1007/3-540-63890-3_11

Strongly connected components (scc) algorithm by R. Tarjan
R. Tarjan, "Depth-first search and linear graph algorithms," 12th Annual Symposium on Switching and Automata Theory (swat 1971), East Lansing, MI, USA, 1971, pp. 114-121. 
https://doi.org/10.1109/SWAT.1971.10

MatchMaker C-lib by K. Kaya, J. Langguth, I. Panagiotas and B. Uçar
https://gitlab.inria.fr/bora-ucar/matchmaker
