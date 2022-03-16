#include <unistd.h>
/**
 * _putchar - writes the c character to stdout
 * @: the character to print
 * Return: On sussess 1
 * On error, -1 is returned and the appropriate error number is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
