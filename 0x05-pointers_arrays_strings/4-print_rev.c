#include <stdio.h>


void print_rev(char *s)
{
	int len = 0;
	int i;
	while (*s != '\0')
	{
		len++;
		++s;
	}

	s--;

	for (i = len; i > 0; i--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
	
}
