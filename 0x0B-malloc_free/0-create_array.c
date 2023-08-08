#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array or null
*/

char *create_array(unsigned int size, char c)
{
int i;

char *n = malloc(size);

if (n == 0 || size == 0)
return (0);

for (i = 0; i < size; i++)
n[i] = c;

return (n);
}
