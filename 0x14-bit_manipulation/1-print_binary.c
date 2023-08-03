#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int big;
	int shot;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (big = n, shot = 0; (big >>= 1) > 0; shot++)
		;

	for (; shot >= 0; shot--)
	{
		if ((n >> shot) & 1)
			printf("1");
		else
			printf("0");
	}
}
