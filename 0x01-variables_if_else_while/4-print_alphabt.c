#include <stdio.h>

/**
  * main - prints alphabet in lowercase
  *
  * Return: always zero (success)
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++
	}
	putchar('\n');
	return (0);
}
