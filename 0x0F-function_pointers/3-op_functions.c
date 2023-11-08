#include "3-calc.h"

/**
 * op_add - Add two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: The result of the addition.
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Subtract two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: The result of the subtraction.
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Multiply two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Divide two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - Get the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(100);
    }
    return (a % b);
}

