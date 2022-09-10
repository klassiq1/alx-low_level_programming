#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - entry point
 *
 *   * Description: prints  if a number is positive or negative.
 *
 *    * Return: 0
 */

int main(void)
{
	int n;

	int n;
	int L;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - Rand_max / 2;
	L = n % 10;
	if (L > 5)
	{
	printf("%s %d is %d and is greater than 5\n", str, n, L);
	}

	else if (L == 0)
	{
	printf("%s %d is %d and is 0\n", str, n, L);
	}

	lese if (L < 6)
	{
	printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);
	}

	return (0);

}
