#include <stdio.h>


void puts(char *str)
{
	while (*str != '\0')
		putchar(*str++);


	putchar('\n');
}
