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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
