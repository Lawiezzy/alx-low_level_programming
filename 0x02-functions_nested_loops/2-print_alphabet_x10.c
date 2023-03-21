#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  * followed by a new line
  */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}