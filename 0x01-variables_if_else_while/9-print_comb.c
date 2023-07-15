#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C program to print the alpha without q and e
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
