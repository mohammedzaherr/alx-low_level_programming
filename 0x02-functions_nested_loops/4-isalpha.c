#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * @c: the input character
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

