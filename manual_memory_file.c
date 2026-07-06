#include<stdio.h>
#include<stdlib.h>

char *readline(FILE *f) {
	/* 1. read each char until \n or EOF
	 * 2. if used size is one less than current (because \0 also needs one)
	 * 	resize to double the size
	 * 3. save the entire line in a buff
	 * 4. after \n or EOF, remove unused space
	 * 5. send it  
	*/

	int index = 0; // first char
	int max = 4; // maximum in the buffer
	int c; // keeps the read char 
	char *buff;
	// buff = malloc(max); // better solution below
	buff = realloc(NULL, max); // same as above 
	// error check
	if(buff == NULL) {
		printf("error with buff alloc\n");
		return NULL;
	}
	
	// but only one function(realloc) is used throughout so better readability
	while(c = fgetc(f), c != '\n' && c != EOF) {
		// check is we ran out of space
		if(index == max - 1) { // -1 because we need space for '\0' at the end
			// increase by 2x
			max *= 2;
			// realloc new size
			char *new_buff = realloc(buff, max);
			if(new_buff == NULL) {
				printf("error with new_buf alloc\n");
				free(buff);
				return NULL;
			}
			buff = new_buff; // change buf to new address
		}
		// add char to buff
		buff[index++] = c;
	}

	// check if file ends
	if(c == EOF && index == 0) {
		free(buff); // because empty line (nothing left in FILE)
		return NULL;
	}

	// remove unused space (if any)
	if(index < max - 1) {
		// create new with exact size
		char *new_buf = realloc(buff, index + 1); // +1 because '\0'
		if(new_buf == NULL) {
			printf("error new_buf realloc during shrink\n");
			free(buff);
			return NULL;
		}
		buff = new_buf; // replace
	}

	// add '\0' to end before sending
	buff[index] = '\0';

	// send the line
	return buff;
}

int main(void) {

	/* 1. read file
	 * 2. loop through each line
	 * 3. print the line
	 * 4. free the line pointer
	 * 5. go to next part of the FILE pointer
	 * 6. loop until EOF in 2
	 * 7. free the FILE pointer
	*/

	FILE *f = fopen("tmp/redwheelbarrow.txt", "r");
	char *line;
	while((line = readline(f)) != NULL) {
		printf("%s\n", line);
		free(line);
	}

	fclose(f);
}
