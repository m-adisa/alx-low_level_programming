#include <stdio.h>
/**
 * main - Entry point
 * @argc: the number of input into main
 * @argv: array containing input into main
 * Return: 0 -success
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
