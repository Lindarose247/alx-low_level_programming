#include "main.h"

/**
 *puts2- function that prints every other character of a string
 *@str: character of a string
 *Return: Always 0
 */

void puts2(char *str)
{
int i;
i = 0;

while (*(str + i) != '\0')
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
i++;
}
_putchar('\n');
}
