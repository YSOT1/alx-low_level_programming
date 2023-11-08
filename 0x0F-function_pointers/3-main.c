#include "3-calc.h"

/**
 * main - Entry point for simple calculator program
 * @argc: Argument count
 * @argv: Argument values
 * Return: 0 for success, other values for failure
 */
int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    int num1 = atoi(argv[1]);
    char *operator = argv[2];
    int num2 = atoi(argv[3);

    int (*op_func)(int, int);
    op_func = get_op_func(operator);

    int result = op_func(num1, num2);

    printf("%d\n", result);

    return 0;
}

