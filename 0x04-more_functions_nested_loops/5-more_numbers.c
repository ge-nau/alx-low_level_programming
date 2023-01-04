#include "main.h"

/**
 * more_number - prints more nums
 * Return: 0
 */

void more_numbers(void)
{
	int i, c;

	i = 0;

	while (i < 10)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + 48);
			}
			_putchar((c % 10) + 48);
		}

		_putchar('\n');

		i++
	}
}
