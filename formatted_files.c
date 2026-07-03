#include<stdio.h>

int main(void) {

	FILE *f = fopen("tmp/person_details.txt", "r");

	// vars to store input from file
	char name[1024];
	int age;
	float height;

	/*
	 * fscanf() is same as scanf()
	 * scanf("%d", &age) is same as fscanf(stdin, "%d", &age)
	 * so instead of getting input from stdin, we get it from file person_details.txt
	 * */

	while(fscanf(f, "%s %d %f", name, &age, &height) != EOF)
		printf("name: %s\tage: %d\theight: %f\n", name, age, height);

	fclose(f);
}
