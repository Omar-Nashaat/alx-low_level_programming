include "main.h"

/**
 * prints 10 times the alphabet, in lowercase, followed by a new line
 *	using _putchar
*/

void print_alphabet_x10(void)
{
	int ch;
	int chh;

	for (ch = 0; ch <= 10; ch++)
	{
		for (chh = 'a'; chh <= 'z'; ch++)
			_putchar(chh);
		_putchar('\n');
	}
}
