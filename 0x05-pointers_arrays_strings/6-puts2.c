#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the input string
 * Return: no return.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putschar(str[i]);
		i++
	}
	_putschar('\n');
}
