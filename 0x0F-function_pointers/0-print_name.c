#include "function_pointers.h"

/**
 * print_name - Print a name using a given printing function.
 * @name: The name to be printed.
 * @f: A function pointer to a printing function.
 */
void print_name(char *name, void (*f)(char *)) {
    f(name);
}

