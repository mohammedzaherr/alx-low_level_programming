#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 26; i++)
	{
		putchar((char)(i + 97));
	}
	putchar('\n');
	return (0);
}
