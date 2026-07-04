#include<stdio.h>

int my_strlen(char *s) {

	char *p = s; // two pointers; `s` stays at first char, `p` moves to the end (\0)
	
	while(*p != '\0')
		p++;
	
	return p - s; // last - first char (distance)
}

int main(void) {

	int a[] = {1, 2, 3, 4, 5};
	printf("[a0] direct: %d\n", a[0]);
	printf("[a1] direct: %d\n", a[1]);

	int *p = a; //pointer-to-array-of-int
	
	printf("[a0] pointer: %d\n", *p);
	// printf("[a0] pointer addition: %d\n", *(p+0));	
	// printf("[a1] pointer addition: %d\n", *(p+1));	
	// you can use while loop and move the pointer p++ or p-- directly
	for(int i = 0; i < 5; i++)
		printf("[a%d] pointer addition: %d\n", i, *(p+i));	

	// strlen using pointer:
	printf("length of \"hello, world!\": %d\n", my_strlen("hello, world!"));
}
