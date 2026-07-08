#include<stdio.h>
#include<stdlib.h> // conversion functions are here

int main(void) {

	// ASCII to int
	int a = atoi("500");
	printf("a: %d\n", a); // a: 500
	// same functions for other types
	// atof		-	ASCII to float
	// atol // atoll	ASCII to long int // long long int
	// above 4 have a major problem
	// if you send a non digit character, it will send `0` back
	// which is bad for error handling
	// i.e.., both `atoi("x")` and `atoi("0")` will return `0`
	
	// replacement is strol family STRING to LONG int
	// strtol(<string>, <error-string-pointer>, number-base)
	char *s1 = "1234";
	// NULL - no <error-string-pointer> if you dont care about error handling
	// 10	- base-10 so decimal decode
	long int x = strtol(s1, NULL, 10);
	printf("x: %lu\n", x); // x: 1234
	// same functions for other types
	// strtol // strtoll	-	STRING to long int // long long int
	// strtoul // strtoull	-	STRING to unsigned long int // unsigned long long int
	// strtof		-	STRING to float
	// strtod // strtold	-	STRING to double // long double
	// one attempt to see why we might not want to ignore error
	char *s2 = "12q34";
	x = strtol(s2, NULL, 10);
	printf("x: %lu\n", x); // x: 12
	// it sends back only until the first non-digit character
	// if the first character is non-digit then it returns 0 as expected
	// ADVICE: catch the error and see if it is empty for verification
	char *s3 = "12q34";
	char *error_string;
	x = strtol(s3, &error_string, 10); // send pointer-to-pointer for error_string
	printf("x: %lu\n", x); // x: 12
	if(*error_string != '\0') {
		printf("e: %s\n", error_string); // e: q34
		printf("%s is not a proper number so fix it\n", s3);
	}		
	// same as above but with a proper number
	s3 = "1234";
	// char *error_string;
	x = strtol(s3, &error_string, 10); // send pointer-to-pointer for error_string
	printf("x: %lu\n", x); // x: 1234
	if(*error_string != '\0') {
		printf("e: %s\n", error_string); 
		printf("%s is not a proper number so fix it\n", s3);
	}

	// char to int
	// char is just ASCII int
	// 'A' == 65; 'a' == 97
	// 'Z' == 90; 'z' == 122
	// similarly a digit character also has its own ASCII value
	// '0' == 48; '9' == 57
	// imagine you want int 4, we can subtract '4' - '0'
	// which would be the same as 52 - 48 = 4 (arithmetic on char are done same as int type) 
	// this trick can be used to convert char to int
	char c = '4';
	a = c; // holds 52
	printf("ASCII val a: %d\n", a); // ASCII val a: 52
	a = c - '0'; // 52 - 48 == 4
	printf("converted a: %d\n", a); // converted a: 4

	// casting
	// if you want to explicitly mention the type you want to convert to
	// mention the type in `()` before the expression
	printf("this is int: %d\n", (2 + 3));
	printf("but you can make it float %f by mentioning (float) at the start\n", (float)(2 + 3));
	// you can use this with void* to cast it to any type
	int p = 123; // normal int
	void *pv = &p; // int-address in void pointer (void can hold ANY type)
	int *pi = (int *)pv; // convert void-pointer to int-pointer
	//int *pi = pv;	     // it can auto convert without casting
	printf("*pi: %d\n", *pi);
	// if you use `%p` to print address saved in pointer
	// you have to cast it back to (void *) or you will get a warning
	printf("pv: %p\n", pv);
	printf("pi (yes cast; no warning): %p\n", (void *)pi);
	// printf("pi (no cast; yes warning): %p\n", pi);
	/*
	warning: format ‘%p’ expects argument of type ‘void *’, but argument 2 has type ‘int *’ [-Wformat=]
	      |         printf("pi (no cast; warning): %p\n", pi);
	      |                                        ~^     ~~
	      |                                         |     |
	      |                                         |     int *
	      |                                         void *
	      |                                        %ls
	*/

}

