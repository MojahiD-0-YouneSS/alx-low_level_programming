#include "main.h"

/**
 * _memset : fills memory with a constant byte
 * @s - memory area to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; 1 < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
