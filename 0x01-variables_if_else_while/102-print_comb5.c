#include <stdio.h>

/**
 * main -Prints all possible combinations of two digit numbers ranging rom 0-99 separated by a comma followed by aspace.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for  (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (1 < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48 );
			       putchar(' ');
			       putchar ((j / 10) + 48);
				putchar((j % 10) + 48);
 if (i != 98 || j != 99)
 {
putchar(',');
putchar(' ');
}
}
}
}
putchar ('\n');
return (0);
}