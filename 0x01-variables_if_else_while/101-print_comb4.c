#include <stdio.h>

/**
  * main - print only the smallest combinations
  * of three-digit numbers, separated by comma
  * followed by a new line
  * Return: always zero (success)
  */
int main(void)
{
	int j, k, l;

	for (j = 48; j <= 55; j++)
	{
		for (k = 49; k <= 56; k++)
		{
			for (l = 50; l <= 57; l++)
			{
				if (l > k || k > j)
				{
					putchar(j);
					putchar(k);
					putchar(l);
					if (j != 55 || k != 56 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
