#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints ll the lphabet in lower case
 *
 * Return: 0
 */
int main(void)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}
