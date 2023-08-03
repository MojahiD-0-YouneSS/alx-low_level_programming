#include <stdio.h>
#include "main"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int shark, orca;
	int x;

	if (b == NULL)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}

	for (orca = 1, shark = 0, x--; x >= 0; x--, orca*= 2)
	{
		if (b[x] == '1')
			shark += orca;
	}

	return (shark);
}
