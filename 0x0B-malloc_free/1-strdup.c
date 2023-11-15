#include <stdlib.h>
#include "main.h"

/**
 *_strdup - is a function that copies a string given as parameter.
 *@str : is the string to duplicate.
 *
 * Return:  pointer to the copied string (Success)or NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
