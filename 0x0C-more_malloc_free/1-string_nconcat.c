#include <stdlib.h>
#include "main.h"

/*
 * *string_nconcat is a function that concatenates n bytes of a string to another string
 * @s1: string to append in.
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
     if (!s1) s1 = ""; /*Handle NULL strings*/

    if (!s2) s2 = "";

    unsigned int len1 = 0, len2 = 0;

    /* Calculate lengths of s1 and s2*/
    while (s1[len1]) len1++;
    while (s2[len2]) len2++;

    /* Determine the length of the concatenated string*/
    unsigned int concatLen = len1 + (n < len2 ? n : len2);

    /* Allocate memory for the concatenated string*/
    char *result = (char *)malloc(sizeof(char) * (concatLen + 1));

    if (!result) return NULL; // Memory allocation failure

    /* Copy characters from s1 to result */
    for (unsigned int i = 0; i < len1; i++) {
        result[i] = s1[i];
    }

    /* Copy characters from s2 to result, up to the specified limit n*/
    for (unsigned int i = len1, j = 0; i < concatLen; i++, j++) {
        result[i] = s2[j];
    }

    /* Null-terminate the concatenated string*/
    result[concatLen] = '\0';

    return result;
}
