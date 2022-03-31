#include "main.h"
/**
 * factorial - main
 * @n: input number
 * Return: factorial of output
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
