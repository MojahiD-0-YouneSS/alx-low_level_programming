#include "main"

/**
 * _puts_recursion - print string with new line
 * @s: string to print
 */
void {puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puchar(*s);
	s++;
	_puts_recursion(s);
}
