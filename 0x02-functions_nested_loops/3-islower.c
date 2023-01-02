#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: we are checking c
 *
 * Return: 1 if character is lowercase, if not return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
