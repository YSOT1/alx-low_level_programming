#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings with a maximum number of bytes.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The maximum number of bytes from s2 to be concatenated.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concatenated;
    unsigned int s1_len = 0, s2_len = 0;
    unsigned int i, j;

    // Handle NULL strings
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    // Calculate the lengths of s1 and s2
    while (s1[s1_len] != '\0')
        s1_len++;
    while (s2[s2_len] != '\0')
        s2_len++;

    // Adjust n if it's greater than or equal to s2's length
    if (n >= s2_len)
        n = s2_len;

    // Allocate memory for the concatenated string
    concatenated = malloc(s1_len + n + 1);
    if (concatenated == NULL)
        return (NULL);

    // Copy s1 into the concatenated string
    for (i = 0; i < s1_len; i++)
        concatenated[i] = s1[i];

    // Copy the first n bytes of s2 into the concatenated string
    for (j = 0; j < n; j++, i++)
        concatenated[i] = s2[j];

    // Null-terminate the concatenated string
    concatenated[i] = '\0';

    return (concatenated);
}
