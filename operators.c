#include<stdio.h>

int main() {
	int x, y;
	x = 11;
	y = x > 10 ? 5 : 15;
	printf("if x=12, y: %d\n", y);
	printf("x=%d is %s\n", x, x % 2 == 0 ? "even" : "odd");
	x = 8;
	y = x < 10 ? 5 : 15;
	printf("if x=8, y: %d\n", y);
	printf("x=%d is %s\n", x, x % 2 == 0 ? "even" : "odd");

	// size of
	printf("size of int: %zu\n", sizeof(x));
	printf("size of float: %zu\n", sizeof(2.14));
	printf("size of char: %zu\n", sizeof('c'));
}
