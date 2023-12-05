// #include "trap.h"

#define N 20

int a[N] = {20000, 120000, 1400000000, 6000000, 1300000, 1500, 160000000, 100000, 0, 180000, 11000, 190000000, 90000, 1000, 70, 50, 400000, 3000000, 8000, 170};

int partition(int *a, int p, int q) {
	int pivot = a[p];
	int i = p, j = q;
	while(i < j) {
		while(i < j && a[j] > pivot) j --;
		a[i] = a[j];

		while(i < j && a[i] <= pivot) i ++;
		a[j] = a[i];
	}

	a[i] = pivot;
	return i;
}

void quick_sort(int *a, int p, int q) {
	if(p >= q) return;

	int m = partition(a, p, q);
	quick_sort(a, p, m - 1);
	quick_sort(a, m + 1, q);
}

int main() {
	quick_sort(a, 0, N - 1);

	return 0;
}
