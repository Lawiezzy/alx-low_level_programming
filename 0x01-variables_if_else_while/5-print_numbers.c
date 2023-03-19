#include <stdio.h>

/**
  * main - print all single numbers
  * in base 10, starting from 0
  * followed byna new line
  * Return: always zero (success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
