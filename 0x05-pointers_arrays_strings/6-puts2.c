#include "main.h"
/**
 * puts2 - main
 * @str: the array to print
 */
void puts2(char *str)
{
	int i = 0;
	char c;

	while (*str != '\0')
	{
		if (i == 0 || i % 2 == 0)
		{
			c = str[i];
			_putchar(c);
		}
		str++;
		i++;
	}
}
