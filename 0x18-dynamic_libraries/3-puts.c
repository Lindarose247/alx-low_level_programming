#include "main.h"

/**
*_puts - Prints a a string, followed by a new line, to stdout
*@str: tested string
*Return: Always 0
*/

void _puts(char *str)
{
int i;
i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}



