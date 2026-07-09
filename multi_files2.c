/* compile directly to executable using `gcc f1.c f2.c -o f2`
 * if you have too many c files and only one or two are changed,
 * there's a shortcut for faster builds
 * 1. compile them to (intermediate; source -> object -> executable) object files individually
 * 2. "link" them together into a single executable for faster build
 * NOTE: this means that you can create object files for the source files ONLY when they are changed
 *       then reuse the old unedited files
 * example steps:
 * 1. `gcc -c f1.c` and `gcc -c f2.c` create the `f1.o` and `f2.o` object files
 * 2. `gcc f1.o f2.o -o f2` will link them together
 * ASSUME, you change contents of f1.c but f2.c is the same,
 *         then you can keep the `f2.o` object file
 *         recompile the `f1.c` to `f1.o` using `gcc -c f1.c`
 *         link the new f1.o with the old f2.o using `gcc f1.o f2.o -o f2`
*/

#include<stdio.h>
#include "multi_files1.h" // Soln. 2 (recommended)

// int add(int, int); // Soln. 1 (not recommended)

int main(void) {
    printf("10 + 2 = %d\n", add(10, 2)); // 10 + 2 = 12
    /* `add` is a fn in multi_files1.c and if we compile together, we can access it here 
     * under a condition:
     * the C compiler knows the prototype of this function
     * we can fix this using two methods
     * 1. create the prototype above `main()`:
     *      `int add(int, int);`
     * 2. write this prototype in a `.h` header file and include it here (recommended):
     *      `#include "multi_files1.h"`
     * */
}

