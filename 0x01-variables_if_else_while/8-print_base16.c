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
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
