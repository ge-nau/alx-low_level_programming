#include "main.h"

/**
 * palindromeChecker - checks the string
 * @str: the string to be checked
 * @len: the length of the string
 * @i: the incrementor, starts at 0
 * Return: 1 if it's a palindrome, 0 if it's not
 */

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to check
 * Return: displays the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * is_palindromee - checks palindrome
 * @s: string to check
 * Return: palindrome 1, 2 if otherwise
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
