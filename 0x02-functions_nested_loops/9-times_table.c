#include "main.h"

/**
 * times_table -print the 9 times table
 */
void times_table(void)
{
	int num, times, equals;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (times = 1; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			equals = num * times;

			if (equals <= 9)
				_putchar(' ');
			else
				_putchar((equals / 10) + '0');

			_putchar((equals % 10) + '0');
		}
		_putchar('\n');
	}
}

