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
	char *s;
	unsigned int a = 0, b = 0, lent1 = 0, let2 = 0;

	while (s1 && s1[lent1])
	{
		lent1++;
	}
	while (s2 && s2[lent2])
	{
		lent2++;
	}
	if (n < lent2)
	{
		s = malloc(sizeof(char) * (lent1 + n + 1));
	}
	else
	{
	        s = malloc(sizeof(char) * (lent1 + lent2 + 1)); 
	}
        if (!s)
	{
		return (NULL);
        }
	while (a < lent1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < lent2 && a < (lent1 + n))
	{
		s[a++] = s2[b++];
        }
	while (n >= lent2 && a < (lent1 + lent2))
	{
		s[a++] = s2[b++];
        }
	s[a] = '\0';

	return (s);
}
