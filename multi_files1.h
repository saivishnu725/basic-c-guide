/* just the prototype line works but what happens if `a -> b -> a` import occurs?
 * to avoid this infinite loop, we can 
 * 1. create a preprocessor variable (generally filename with _ instead of .) MULTI_FILES1_H
 * 2. and check if it is set already
 * 2.a: if not set, create the prototype peacefully
*/

#ifndef MULTI_FILES1_H  // if it is not already defined
#define MULTI_FILES1_H  // define it

// File multi_files1.c

int add(int, int);

#endif                  // end the preprocessor check
