#include<stdio.h>

// pass a[][5] or a[2][5]. it needs all dimensions except first one
void twice_display(int a[][5], int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++)
			printf("%d ", a[i][j] * 2);
		printf("\n");
	}
}

// pass a[][5] or a[2][5]. it needs all dimensions except first one
void twice_change(int a[][5], int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++)
			a[i][j] *= 2;
	}
}

int main(void) {
	int a[][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 0}
	}; // 2D arr of int

	// only display no change
	printf("[twice_display] only display; no change\n");
	twice_display(a, 2, 5);

	// change array
	printf("[main] change array\n");
	twice_change(a, 2, 5);
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 5; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

