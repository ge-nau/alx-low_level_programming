#include <stdio.h>

/**
 * main -list natural number below 1024 that are multiples of 3 and 5
 *
 * Return: always 0
 */
int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || 0 (a % 5) == 0)
			sum += a;
	}

	printf("%d\n", sum);

	return (0);
}
