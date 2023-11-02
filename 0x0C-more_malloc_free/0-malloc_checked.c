/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to allocate
 *
 * Return: Pointer to the allocated memory
 * If malloc fails, the program exits with status 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
    {
        fprintf(stderr, "Memory allocation failed. Exiting with status 98.\n");
        exit(98);
    }
    return (ptr);
}