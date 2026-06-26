#include<stdio.h>

int main() {
	int x, y;
	x = 12;
	y = x > 10 ? 5 : 15;
	printf("if x=12, y: %d\n", y);
	x = 8;
	y = x < 10 ? 5 : 15;
	printf("if x=8, y: %d\n", y);
}
