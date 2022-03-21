#include "main.h"
/**
 * print_rev - main
 * @s: the string to manipulate
 */
void print_rev(char *s)
{
	int i;

	for (i = '\0'; s[i]; i--)
	{
		if (i == '\0')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
