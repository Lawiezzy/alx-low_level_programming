#include <stdio.h>

/**
  * main - print all single numbers
  * in base 10, starting from 0
  * followed by a new line
  * Return: always zero (success)
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
