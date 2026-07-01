#include<stdio.h>
#include<string.h> // included to use strlen

size_t custom_strlen(char *p) {
	int count = 0;
	while(p[count] != '\0')
		count++;
	return (size_t)count;
}

int main(void) {
	char *s = "hello, world!"; 	//pointer-to-char as it points to first character
	//char s[14] = "hello, world!";	// can also create strings using char array
	//char s[] = "hello, world!";	// if initialised at declaration, size can be omitied
	printf("s: %s\n", s);

	printf("size of s: %zu\n", custom_strlen(s));

	for(int i = 0; i < 14; i++)
		printf("%c", s[i]);
	printf("\n");

	/* we can not copy string using = operator
	 * this is because it will copy the pointer to the first character
	 * ex: `p = s` will copy the pointer;
	 * 	so `p[0] = 'e'` will change `s[0]` as well
	 * */
	char p[15];
	strcpy(p, s); // create a copy so original is not altered
		      // (new, old)
		      // changes to new will not affect old
	p[0] = 'e';
	printf("size of p: %zu\n", strlen(p));
	printf("p: %s\n", p);
}
