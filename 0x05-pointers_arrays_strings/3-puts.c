#include <stdio.h>


void _puts(char *str)
{
	while (*str != '\0')
		putchar(*str++);


	putchar('\n');
}
