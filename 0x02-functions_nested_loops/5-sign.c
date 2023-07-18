#include "main.h"

/**
 * print_sign - is a function that print the sign of the number
 * print + if n is positive , 0 if n is zero and - if n is negative
 *
 * @n: takes integer type input for function
 *
 * Return: 1 if +,0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	return (0);
}
