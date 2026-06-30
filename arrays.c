#include<stdio.h>

// inc++
// *a, a[], a[5] all would work the same
void twice_display(int *a, int n) {
	for(int i = 0; i < n; i++)
		printf("%d ", a[i] * 2);
	printf("\n");
}

void twice_change(int *a, int n) {
	for(int i = 0; i < n; i++)
		a[i] *= 2;
}

int main(void) {
	int a[] = {1, 2, 3, 4, 5}; // arr of int
	int *p; // pointer-to-int
	printf("a[0]: %d\n", a[0]);
	//p = &a[0]; // get address of first element to get the entire array
	// or else a shorthand as below to do the same (address of first element)
	p = a; // `a` does the same as `&a[0]`
	printf("p: %d\n", *p);

	// only display no change
	printf("[twice_display] only display; no change\n");
	twice_display(a, 5);

	// change array
	printf("[main] change array\n");
	twice_change(a, 5);
	for(int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");

}
