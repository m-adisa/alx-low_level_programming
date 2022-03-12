#include <stdio.h>
/**
 * main - Entry point
 * Description: print ll base 10 single digit integers
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	for (i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
