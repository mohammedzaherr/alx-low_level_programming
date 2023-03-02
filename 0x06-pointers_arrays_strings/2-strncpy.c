#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the the maximum bytes to copy
 * Return: the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n && j < i)
	{
		*(dest + j) = *(src + j);
		if (*(src + j) == '\0')
			break;
		j++;
	}
	return (dest);
}
