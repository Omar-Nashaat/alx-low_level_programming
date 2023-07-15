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
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
