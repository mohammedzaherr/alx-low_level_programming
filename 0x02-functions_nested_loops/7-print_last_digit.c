#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number.
 * Return: the last digit of number n.
 * @n: the input number.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
