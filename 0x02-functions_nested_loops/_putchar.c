#include <unistd.h>

/**
  * _putchar - prints character to standard output
  * @c: the character to print
  * Return: Always 0 (success)
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
