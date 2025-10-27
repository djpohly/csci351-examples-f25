int sum_array_rows(int a[M][N])
{
	int i, j, sum = 0;
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			sum += a[i][j];
	return sum;
}

int sum_array_cols(int a[M][N])
{
	int i, j, sum = 0;
	for (j = 0; j < N; j++)
		for (i = 0; i < M; i++)
			sum += a[i][j];
	return sum;
}

// Can we improve the locality?
int sum_array_3d(int a[M][N][N])
{
	int i, j, k, sum = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			for (k = 0; k < M; k++)
				sum += a[k][i][j];
	return sum;
}
