#include<stdio.h>

int main(void) {

	// writing

	FILE *f;
	unsigned char bytes[6] = {1, 20, 255, 2, 52, 0};

	f = fopen("tmp/binary.bin", "wb"); // add `b` to indicate binary
	fwrite(bytes, sizeof(char), 6, f);
	// (pointer-to-data, sizeof each item, count, pointer-o-file)

	fclose(f); // close after finish
	
	// reading
	unsigned char c;
	f = fopen("tmp/binary.bin", "rb"); // read mode
	while(fread(&c, sizeof(char), 1, f) > 0) // read one byte until fread returns > 0
		printf("%d ", c);
	printf("\n");

}
