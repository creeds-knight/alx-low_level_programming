#include "main.h"
int _strlen_recursion(char *s);
int check(char *s, int i, int len);
/**
 * is_palindrome - Checks if the string is the same even when read backwards
 * @s: Input string
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return  (check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of a string
 * @s: input
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check - checks the characters recusively for a palindrome
 * @s: String input
 * @i: iterator
 * @len: length of the string
 * Return: 1 for palindrome 0 otherwise
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
