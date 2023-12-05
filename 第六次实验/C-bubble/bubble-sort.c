#include "trap.h"

#define N 20

int a[N] = {200, 1212, 3114, 76, 913, 5215, 8716, 910,30000, 18000, 7711, 190, 39, 21, 87, 2455, 400, 33, 800, 170};

void bubble_sort() {
	int i, j, t;
	for(j = 0; j < N; j ++) {
		for(i = 0; i < N - 1 - j; i ++) {
			if(a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
}

int main() {
	bubble_sort();

	int i;
	for(i = 0; i < N; i ++) {
		check(a[i] == i);
	}

	check(i == N);

	bubble_sort();

	for(i = 0; i < N; i ++) {
		check(a[i] == i);
	}

	check(i == N);

	return 0;
}
