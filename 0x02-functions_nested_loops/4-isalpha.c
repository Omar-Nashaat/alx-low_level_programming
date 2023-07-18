#include "main.h"

/**
 *_isalpha - function to check if
 *character is lowercase or uppercase
 *
 *@c: checks input of function
 *
 *Return: return 1 if c is a letter,
 *lowercase or uppercase Returns 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 48 && c < 58)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
