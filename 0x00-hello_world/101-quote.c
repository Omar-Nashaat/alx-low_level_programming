#include <unistd.h>

/**
 * mian -entry point
 *
 * Description: A C program that prints text without printf and putchar
 *
 * Return: Always 1 (fail)
*/

int main(void)
{
	char qou[] = "and that piece of art is useful\" - Dora Korpar, 20-5-10-19\n";

	write(1, qou, 59);
	return (1);
}
