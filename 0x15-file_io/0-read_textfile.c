#include "Tail.h"
#include <stdlib.h>

/*
 *
 * a file I/O in c is refers to Input/Output operations involving files in the C programming language. It allows you to read data from files (input) and write data to files (output). The standard library provides functions to perform these operations.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
       ssize_t D, r, Q;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	D = open(filename, O_RDONLY);
	r = read(D, buffer, letters);
	Q = write(STDOUT_FILENO, buffer, r);

	if (D == -1 || r == -1 || Q == -1 || Q != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(D);

	return (Q);
}
