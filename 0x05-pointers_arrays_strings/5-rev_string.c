#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char cl, cr;

	while (s[i] != '\0')
		i++;
	j = i - 1;
	i = 0;
	while (j > i)
	{
		cl = s[i];
		cr = s[j];
		s[i] = cr;
		s[j] = cl;
		i++, j--;
	}
}
