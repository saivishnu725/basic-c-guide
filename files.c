#include<stdio.h>

int main(void) {

	// reading
	FILE *f; // pointer-to-FILE
	f = fopen("tmp/files.txt", "r"); // fopen to files.txt and in `r` read mode
	
	int c;
       	//c = fgetc(f); // read a single character
	
	// loop the file until we get EOF
	while((c = fgetc(f)) != EOF)
		printf("%c", c);
	printf("\n");
	fclose(f); // close the file after finishing

	// writing
	// writing is same as stdout but with the file pointer
	// printf("string") is same as fprintf(stdout, "string")

	f = fopen("tmp/files.txt", "w"); // fopen to files.txt and in `w` write mode
	fputc('S', f); // single char
	fputc('\n', f); // new line
	fprintf(f, "hola!\n"); // print/write a line to file
	fputs("ciao", f);

	fclose(f);
}

