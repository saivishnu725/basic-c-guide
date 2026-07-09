# basic-c-guide

some random C syntax for a cheat sheet; goes advance per commit

## running

all single files were edited using `vim <filename>.c` and ran using gcc

my gcc setup was `gcc  -Wall -Wextra -Wpedantic -fsanitize=address -g <filename>.c -o output/<filename> && ./output/<filename>` but you may change it for your needs.

## note

this is not a be-all and end-all guide. it lacks a lot of content within the topics i've covered.

1. i skipped over a lot of topics that a beginner (somewhat) might already be well aware of (like literally `scanf` -\_-). after the list gets a bit deeper, i will circle back and go through them all as much as i can.
2. comments were not as descriptive in the beginning; so even they will get some rewording when i get to it.

## order

1. hello.c - `printf()` and variables
2. operators.c - `a<=b?a:b;` ternary and `sizeof()`
3. random.c - do-while and `rand()`
4. pointers.c - `*` creation and pass by `&` reference
5. arrays.c - creation and passing to function using `*` pointer
6. 2darrays.c - same as `1D-array` but in `2` dimensions
7. strings.c - foundation for strings `char *` and a `custom_strlen()`
8. structs.c - basic intro to `struct` (no `typedef` yet)
9. files.c - file open/close/read/write `fgetc()`/`fputc()`
10. files_lines.c - read file line-by-line using `fgets()`
11. formatted_files.c - reading from file to variables using `fscanf()`
12. more_pointers.c - pointer arithmetic (`+`) and `char` to `int` in custom `my_strlen()`
13. memory_copy.c - used `memcpy()` and showcase pointer-to-void (`void *`)
14. manual_memory.c - `malloc()`, `calloc()` and `realloc()`
15. manual_memory_file.c - read file line-by-line using manual memory (intermediate version of `10.` )
16. conversions.c - converting data between `different` types using `atoi`/`strtol` function family, `arithmetics`, and `casting`
17. constant_pointer.c - various ways of using `const` between pointers
18. static_var.c - `static` and `extern` variable
19. multi_files1.c, multi_files1.h, multi_files2.c - basic intro on how to use `.h` header files
20. cmdargs.c - get commandline arguments and parse it using `argc` and `argv`
21. exit_status.c - `EXIT_SUCCESS` AND `EXIT_FAILURE` for the shell to know if the program ended as expected or with errors
22. envvars.c - get `environment variables` and use them in the program using `getenv()` and other non-standard ways

## contribution

contributors are welcome with both arms. i am a student who never studies so that would make me practically unemployed so i am always ready to go through ALL the Issues and/or Pull Requests instantly so feel free to submit them whenever you can, no matter how dumb it is.

try to keep AI out of this as much as possible. there is nothing here that would require it's helpfulness.

## license

gpl-v2.0 so follow accordingly; although there are better guides out there
so i'm not sure what you will get from this.
