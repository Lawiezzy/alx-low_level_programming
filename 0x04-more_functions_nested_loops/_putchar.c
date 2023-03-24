#include <unistd.h>

/**
 * _putchar - writes character to standard output
 * write: function that is used by _putchar
 * @c: the character to be printed
 * Return: 1 if successful, -1 if otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
