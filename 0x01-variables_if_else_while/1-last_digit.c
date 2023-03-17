#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the last digit of a random
 * number stored in variable n
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);

	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and it is less than 5\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and it is less than 6 and not 0\n");
	return (0);
}
