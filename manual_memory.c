#include<stdio.h>
#include<stdlib.h> // all manual memory functions () stay in this file

int main(void) {
	int *p = malloc(sizeof(int)); // create one int size of memory
	*p = 500;
	printf("*p: %d\n", *p);
	free(p); // always free the memory after use
	
	// check status incase malloc fails
	int *p2 = malloc(sizeof(int));
	if(p2 != NULL) {
		*p2 = 420;
		printf("*p: %d\n", *p2);
		free(p2);
	} else {
		printf("some alloc error\n");
	}

	// memory for array of n values 
	// 1. use `malloc(bytes-per-item * n)` to store n bytes
	// 2. use `calloc(n, bytes-per-item)`
	// key diff
	// 	calloc: will auto-initalize every byte to `0`
	// 	mallocuse: memset(pointer, <value>0, <total memory size in bytes>)
	// use `free(pointer)` for both as usual
	// ex: array of 10 int
	//     malloc(sizeof(int) * 10)
	//     calloc(10, sizeof(int))

	int *p3 = calloc(5, sizeof(int));
	if(p3 != NULL) {
		for(int i = 0; i < 5; i++)
			*(p3 + i) = i * 10;
		for(int i = 0; i < 5; i++)
			printf("*p[%d]: %d\n", i, *(p3 + i));
		
		// imagine we need 5 more (total 10) int in this array (dynamic array)
		// use `realloc`, send pointer and extra-bytes-count
		// *p3 = realloc(p3, 10 * sizeof(int));
		// above is not right; create new -> verify and then replace
		int *np3 = realloc(p3, 10 * sizeof(int));
		if(np3 == NULL) {
			printf("some realloc error\n");
			return -1;
		}
		p3 = np3; // replace if no realloc error

		for(int i = 5; i < 10; i++)
			*(p3 + i) = i * 10;
		printf("after resize\n");
		for(int i = 0; i < 10; i++)
			printf("*p[%d]: %d\n", i, *(p3 + i));
		
		free(p3);
	} else {
		printf("some alloc error\n");
	}


}

