#include "main.h"

/**
 * print_times_table -  prints the times table of the input
 * @n: n is the value of the input
 */
void print_times_table(int n)
{
	int num, times, equals;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (times = 1; times <= n; times++)
			{
				_putchar(',');
				_putchar(' ');

				equals = num * times;

				if (equals <= 99)
					_putchar(' ');
				if (equals <= 9)
					_putchar(' ');

				if (equals >= 100)
				{
					_putchar((equals / 100) + '0');
					_putchar(((equals / 10)) % 10 + '0');
				}
				else if (equals <= 99 && equals >= 10)
				{
					_putchar((equals / 10) + '0');
				}
				_putchar((equals % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
