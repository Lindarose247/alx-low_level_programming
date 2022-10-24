#include "main.h"

/**
 *rev_string - a function that reverses a string
 *@s: tested string reverse
 *Return: Always 0
 */

void rev_string(char *s)
{
int i;
int len;
char a;

len = 0;

while (*(s + len) != '\0')
{
len++;
}
for (i = 0; i < (len / 2); i++)
{
a = *(s + i);
*(s + i) = *(s + len - i - 1);
*(s + len - i - 1) = a;
}
}


