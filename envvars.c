// export SVNU="greatest person ever"
// you can see list of all environment variables using only `set` without arguments
// you can remove the variable by using `unset SVNU`
#include <stdio.h>
#include <stdlib.h> // getenv()


/* there is another way to get environment variables
 * NOTE: two methods actually and both are NOT recommended
 * 1. declare an external variable called "environ" as a pointer-to-string
 *      extern char **environ;
 * 
 * 2. add another string array next to argv, it will fetch all the variables
 *      int main(int argc, char **argv, char **env) {}
 * loop through both of these until you reach `NULL` same as **argv
 * they are a "key=value" string so we have to manually parse it
 */

int main(void) {
    char *val = getenv("SVNU"); // searches for SVNU; return string if found- NULL if not
    
    if(val == NULL) {
        // not found
        printf("env var named SVNU not found\nset it and try again.\n");
        return EXIT_FAILURE;
    }
    // found
    printf("value of SVNU: %s\n", val);
    // no return statement so `0` by default
}
