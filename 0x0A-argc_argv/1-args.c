#include <stdio.h>
/**
 * main - Entry point
 * @argc: counts input
 * @argv: array of input flags
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
