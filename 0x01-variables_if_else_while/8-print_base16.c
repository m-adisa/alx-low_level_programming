#include <stdio.h>
/**
 * main - Entry point
 * Description: base 16 numbers in lower case
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; 1 < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
