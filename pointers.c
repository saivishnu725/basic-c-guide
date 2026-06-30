#include<stdio.h>

void increment(int *n){ // get pointer-to-int
	*n = *n + 1; // dereference and increment
	// no need to send it back (return) as it has already inc in the memory
}

int main(void) {
	int i = 10; // regular var
	int *p; // pointer-to-int
	p = &i; // same the address & to pointer
	printf("i: %d\n", i);
	printf("&i: %p\n", &i); // &i is address
	printf("p: %p\n", p);
	printf("*p: %d\n", *p); // dereferencing the pointer

	// increment i using pointer
	increment(p);
	printf("i: %d\n", i);
	printf("*p: %d\n", *p);
}

