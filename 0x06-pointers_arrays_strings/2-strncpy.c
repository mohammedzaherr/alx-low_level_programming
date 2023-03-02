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
	int j = 0;

	while (j < n)
	{
		*(dest + j) = *(src + j);
		if (*(src + j) == '\0')
			break;
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
