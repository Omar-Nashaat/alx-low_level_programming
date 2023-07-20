#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * using _putchar twice
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int i, k, num;

	for (i = 0; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			num = k;
			if (k > 9)
			{
				_putchar(1 + 48);
				num = k % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
