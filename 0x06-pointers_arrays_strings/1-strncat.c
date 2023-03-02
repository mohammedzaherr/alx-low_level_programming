#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: the source string to be appended
 * @dest: the destination string to append to
 * @n: the maximum bytes to append to dest
 * Return: the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
