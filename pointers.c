#include<stdio.h>

int main(void) {
	int i = 10; // regular var
	int *p; // pointer-to-int
	p = &i; // same the address & to pointer
	printf("i: %d\n", i);
	printf("&i: %p\n", &i); // &i is address
	printf("p: %p\n", p);
	printf("*p: %d\n", *p); // dereferencing the pointer
}
