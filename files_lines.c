#include<stdio.h>

int main(void) {

	FILE *f = fopen("tmp/redwheelbarrow.txt", "r");
	char s[1024];
	int line = 0;
	
	/*	
       	* `fgets(s, sizeof s, f)` gets a line,
	* saves it in `s`,
	* `sizeof s` gives how much `s` can save
	* `f` is the file pointer
	*/
	
	while(fgets(s, sizeof s, f) != NULL)
		printf("%d: %s", ++line, s);

	fclose(f);
}
