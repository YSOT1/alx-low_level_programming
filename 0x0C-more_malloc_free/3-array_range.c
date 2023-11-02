#include<stdlib.h>
#include "main.h"

/**
 * array_range - Create an array of integers within a specified range.
 * @min: The minimum value (inclusive) for the range.
 * @max: The maximum value (inclusive) for the range.
 *
 * Return: A pointer to the newly created array or NULL on failure or if min > max.
 */
int *array_range(int min, int max) {
    int *arr;
    int size, i;

    if (min > max)
        return NULL;

    size = max - min + 1;
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
        return NULL;

    for (i = 0; i < size; i++) {
        arr[i] = min + i;
    }

    return arr;
}

