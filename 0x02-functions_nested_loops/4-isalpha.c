#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: c is the character we are checking
 *
 * Return: if it is an alphabet return 1, otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
