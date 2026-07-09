#include <stdio.h>
#include <stdlib.h>

int add(int length, char *strlist[]) {
    int total = 0;
    for(int i = 0; i < length; i++) {
        int val = atoi(strlist[i]); // convert number-string to int
        total += val;
    }
    return total;
}


// we fill the arguments list with two variables instead of `void`
// 1. argc:     number of arguments
// 2. argv:     array-of-string that holds all the arguments
// NOTE: the index `0` will hold the program name: path/to/file/xecutable_file
//       eg: my index 0 will have `./output/cmdargs`

int main(int argc, char *argv[]) {
    for(int i = 0; i < argc; i++)
        printf("%d: %s\n", i, argv[i]);

    printf("Sum: %d\n", add(argc, argv));
}

/*
 * same as above but using pointer arithmetics
 * `char *argv[]` was holding a array of string so see it as `string argv[]` if C had strings
 * if it were int, we could replace `int argv[]` to `int *argv` so do the same with string
 * `char *argv[]` can be replaced with `char **argv` which is a pointer to string and it can act as array
*/
/*int main(int argc, char **argv) {
   printf("length: %d\n", argc);
    int total = 0;
    // the end of **argv or argv[argc] has a neat trick- it always has NULL so loop until we find it
    for(char **p = argv + 1; *p != NULL; p++) { // starting with argv+1 because `argv+0` is the program name
        int val = atoi(*p);
        total = val;
    }
    printf("total: %d\n", total);
}*/

