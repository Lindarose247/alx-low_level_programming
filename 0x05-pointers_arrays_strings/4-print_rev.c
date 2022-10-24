#include "main.h"

/**
*print_rev - Print  function that prints a string in reverse
*@s: reverse string
*Return: Alway 0
*/

void print_rev(char *s)
{
int i;
i = 0;

while (*(s + i) != '\0')
{
i++;
}
i = i - 1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
putchar('\n');
}


