#include <unistd.h>

/**
 * main - entry point
 *
 * Description: A C program that prints text without printf and putchar using library unistdand array and function write that takes the start of printing and the array and the number of letters will be printed as parameters
 *
 * Return: Always 1 (fail)
*/

int main(void)
{
	char qou[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qou, 59);
	return (1);
}
