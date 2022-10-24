#include "main.h"
/**
 *swap_int - Print " function that swaps the values of two integers"
 *@a:swap a to b
 *@b:swap to a
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
int exchange;
exchange = *a;
*a = *b;
*b = exchange;
}

