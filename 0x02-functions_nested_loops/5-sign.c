#include "main.h"
/**
 * print_sign - checks the integer type.
 * @n: the number to be checked.
 * Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
