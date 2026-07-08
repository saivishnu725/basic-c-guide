// NOTE: static variables are not visible outside the file;
// regular global variables can be accessed by other files by the other file uses `extern`
// example: 
// 	abc.c: int a = 100;
// 	xyz.c: extern int a; printf("a: %d\n", a); // a: 100
// 	xyz.c can declare extern-a inside a function or globally, it won't matter

#include<stdio.h>

void regcounter(void) {
	int count = 1;
	printf("[regular] count: %d\n", count);
	count++; // increase count by 1
}

void statcounter(void) {
	static int count = 1; // initialised only once by the first fn call
	//static int count;   // a static variable will be initalised `0` by default

	printf("[static] count: %d\n", count);
	count += 10; // increase count by 10
}

int main(void) {
	regcounter();
	regcounter();
	regcounter();
	regcounter();
	// static counter's `count` perists value until program ends
	statcounter(); // this call initalised `count`
	statcounter();
	statcounter();
	statcounter();
	regcounter(); // again just to showcase
	statcounter();
}

