#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * using _putchar twice
 *
 * Return: Always 0 (success)
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
