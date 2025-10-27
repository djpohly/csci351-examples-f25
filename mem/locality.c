// Data and instruction references
// Temporal and spatial locality
long array_sum(int *a, int n) {
	long sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
