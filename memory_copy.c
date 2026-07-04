#include<stdio.h>
#include<string.h> // memcpy is in string.h (why? because they did it once and it never changed)

// custom memcpy to see why void* is useful
void *my_memcpy(void *dest, void *src, int bytes) {
	char *s = src, *d = dest; // convert to char for dereferencing;
	// not int as it is 4B while char is 1B
	while(bytes--)
		*d++ = *s++; // copy byte by byte until none left
	
	return dest; // not needed but they want it for stuff when needed so just in case
}

int main(void) {

	int a = 10;
	printf("a: %d\n", a);
	int b = 5;
	printf("b: %d\n", b);
	memcpy(&b, &a, sizeof(int));
	printf("b after copy: %d\n", b);

	// copy string
	char *s1 = "hello, world!";
	char s2[14]; // could not create as `*s2` because it needed to know size; it was unitialized
	memcpy(s2, s1, 14 * sizeof(char));
	printf("s2: %s\n", s2);

	// copy int array
	int a1[5] = {1, 2, 3, 4, 5};
	int a2[5]; // create empty array
	memcpy(a2, a1, 5 * sizeof(int)); // each item byte size * 5 times (array size)
	printf("a1[0]: %d\ta1[1]: %d\n", a1[0], a1[1]);
	printf("a2[0]: %d\ta2[1]: %d\n", a2[0], a2[1]);

	// copy float array
	// same as int but different type
	
	// copy struct
	// also same as string but it is easier/safer to use `=` operator
	// struct s1, s2
	// copy using s2 = s1 rather than copying `memcpy(s2, s1, sizeof s1)`

	// float array using my_memcpy
	float f1[5] = {1.0, 2.1, 3.2, 4.3, 5.4}; // src
	float f2[5]; // dest
	my_memcpy(f2, f1, 5 * sizeof(float));
	printf("f1[0]: %.2f\tf1[1]: %.2f\n", f1[0], f1[1]);
	printf("f2[0]: %.2f\tf2[1]: %.2f\n", f2[0], f2[1]);

}

