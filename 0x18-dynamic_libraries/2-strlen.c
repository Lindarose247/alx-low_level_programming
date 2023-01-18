#include "main.h"

/**
*_strlen - Print function that returns legnth if a string"
*@s: is a string
*Return: string length
*/

int _strlen(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{ i++;
}
return (i);
}


