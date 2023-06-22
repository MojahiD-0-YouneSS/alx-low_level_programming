#include "main.h"
#include <stdio.h>
/**
 * _isupper checks for uppercase character
 * @c: character to be checked
 * Return : 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (( c >= 'A') && (c <= 'Z'))
		return (1);
	else
                 return (0);
}

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
