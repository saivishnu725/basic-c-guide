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
}
