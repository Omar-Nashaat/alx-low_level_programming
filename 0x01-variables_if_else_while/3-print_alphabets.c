#include <stdio.h>

/**
 * main -entry point
 *
 * Description: A C program that prints alpha in small and capital
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char start = 'a';
	char end = 'e';
	char ch = start;

	while (ch <= end)
	{
	putchar(ch);
	ch++;
	}
	char start2 = 'A';
	char end2 = 'Z';
	char ch2 = start2;

	while (ch2 <= end2)
	{
	putchar(ch2);
	ch2++;
	}
	putchar("\n");

return (0);
}
