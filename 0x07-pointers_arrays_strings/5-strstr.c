#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
int i;

for (i = 0; *haystack != '\0'; *haystack++)
{
char *i = haystack;
char *p = needle;

while (*i == *p && *p != '\0')
{
i++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
