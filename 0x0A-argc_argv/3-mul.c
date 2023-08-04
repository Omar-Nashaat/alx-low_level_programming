#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print the result of the multiplication, followed by a new line
 * @argc: number of arguments
 * @argv: array of string carries arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
int result;

if (argc == 3)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
