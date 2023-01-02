#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int times = 0;
	char letter;

	while (times++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
