#include<stdio.h>
#include<stdlib.h> 

int main() {
	int r, i = 5;
	do {
		r = rand() % i;
		printf("%d\n", r);
	} while(r != 4);
}
/*
same pattern all the time
3
1
2
0
3
0
1
2
4

because rand() is pseudorandom number generator. use srand() for true random
*/
