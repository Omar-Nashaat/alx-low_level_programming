#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int ch, chh;

	for (ch = 0; ch <= 9; ch++)
	{
		for (chh = 'a'; chh <= 'z'; chh++)
			_putchar(chh);
		_putchar('\n');
	}
}
