#include "exam.h"
#include <string.h>

int IsPerfect(int mat[][N])
{
	int i, j, k;
	int helper[N];

	memset(helper, 0, N * sizeof(int));

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			
			if (mat[i][j] > N || mat[i][j] < 1)
				return 0;
			if (helper[mat[i][j] - 1] == 1)
				return 0;
			else
				helper[mat[i][j] - 1] = 1;
		}
		// VV
		memset(helper, 0, N * sizeof(int));
	}

	for (j = 0; j < N; j++)
	{
		for (i = 0; i < N; i++)
		{
			if (mat[i][j] > N || mat[i][j] < 1)
				return 0;
			if (helper[mat[i][j] - 1] == 1)
				return 0;
			else
				helper[mat[i][j] - 1] = 1;
		}
		memset(helper, 0, N * sizeof(int));
	}

	return 1;
}
