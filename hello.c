#include<stdio.h>
#include<stdbool.h> // not needed in C23

int main() {
	int i = 5;
	float f = 3.14;
	char *s = "world";
	bool b = true;
	printf("hello, %s!\t i = %d\t f = %f\n", s, i, f);
	if(b)	printf("true\n");
	printf("%d\n", true == 12); // 0
	printf("%d\n", true == 1);  // 1
}
