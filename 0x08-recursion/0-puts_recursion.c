#include "main.h"
/**
 * @s: the string to be displayed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
