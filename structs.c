#include<stdio.h>

struct person {
	char *name;
	int age;
	float height;
};

void set_height(struct person *p, float height) {
	// two ways to access fields from pointer-to-struct
	// 1. arrow -> operator: p->name
	// 2. dereference the pointer: (*p).name
	p->height = height;
	printf("[p2] name: %s\theight: %f\n", p->name, (*p).height);
}

int main(void) {
	// not mandatory to fill ALL fields; auto initialised to `0`
	struct person p1 = {"sample", 18, 176.5}; // same order as definition
	struct person p2 = {.age=23, .name="svnu"}; // any order with same name

	// to access fields from struct
	// dot `.` operator: p.name
	printf("[p1] name: %s\theight: %f\n", p1.name, p1.height);
	// pass by reference as a pointer-to-struct
	set_height(&p2, 180.5);
}

