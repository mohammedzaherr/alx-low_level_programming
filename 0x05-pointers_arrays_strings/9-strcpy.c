#include "main.h"

/**
 * _strcpy - copy a string
 * @src: the string to be copied
 * @dest: the destenation
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	while (src[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
