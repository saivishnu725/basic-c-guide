// a: ./output/exit_status 69 1.756
// b: ./output/exit_status 1 2 3
#include<stdio.h>
#include <stdlib.h> // holds EXIT_SUCCESS and EXIT_FAILURE
#include<math.h> // hols pow(); add `-lm` compile flag

int main(int argc, char *argv[]) {
    if(argc != 3) {
        // b: extra arguments
        printf("invalid amount of arguments; send only weight and height\n");
        return EXIT_FAILURE; // exit status for the shell to know
    }
    // a: proper amount of args
    float weight = atof(argv[1]), height = atof(argv[2]);
    float bmi = weight / pow(height, 2);
    printf("bmi: %f\n", bmi);
    return EXIT_SUCCESS;
    // return 0; // this works too; both are same
    // my default, it will send `0` so not returning anything is also fine
}

/* EXIT_FAILURE returned 1
 * EXIT_SUCCESS returned 0
 * you can check this value in shell using `echo $?` command
 * */

