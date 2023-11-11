#include <stdlib.h>
#include "main.h"
/*
 * malloc_checked is a function that allocates memory using malloc
 * @b: number of bytes to allocate
 * return a pointer to the allocated memory address
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

