#include "main.h"
/**
 * isSqrt - helper
 * @n: input
 * @i: iterator
 * Return: square root of number
 */
int isSqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (isSqrt(n, i + 1));
}

/**
 * _sqrt_recursion - main
 * @n: input
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (isSqrt(n, 1));
}
