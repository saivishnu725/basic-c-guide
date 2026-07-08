#include<stdio.h>

int main(void) {

	int a[] = {10, 20};
	// position of const keyword changes the meaning
	// 1. `const int *<pointer_var>` 
	const int *p1 = a;
	//int const *p1 = a; // same as above; no difference
	printf("0: %d\n", *p1);
	p1++; // works! now points to p[1]
	printf("1: %d\n", *p1);
	// *p1 = 21; // this will NOT work! because it "CAN'T" change what it points to
	// `const int *<pointer_var>` is useful when you want to pass an array to function but don't want it to change the content while still be able to iterate it
	
	// 2. `int *const <pointer_var>`
	int *const p2 = a;
	printf("0 [before]: %d\n", *p2);
	//p2++; // this will "NOT" work! because it "CAN'T" perform pointer arithmetics
	*p2 = 11;
	printf("0 [after]: %d\n", *p2);

	// 3. `const int *const <pointer_var>`
	// both are not possible
	const int *const p3 = a;
	printf("0: %d\n", *p3);
	//p3++; // this will "NOT" work! because of second *const (applied to pointer)
	//*p3 = 12; // this will "NOT" work! because of first const (applied to type int)
	printf("0 [again]: %d\n", *p3);

	// NOTE: you can assign `const int*` to `int *` but it is undefined behavior
	// eg: const int a = 100; int *p = &a; *p = 150; 
	// here, we are asking `int *` to hold address of `const int` so the const-ness is discarded
	// it (assignment to `*p`) "might" work but it is undefined
}

