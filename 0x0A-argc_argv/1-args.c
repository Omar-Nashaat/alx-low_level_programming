#include <stdio.h>

/**
 * main - print the number of arguments passed
 * @argc: number of arguments
 * @argv: array of string carries arguments
 * Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
(void)argc;
printf("%d\n", argc - 1);
return (0);
}
