#include"main.h"



/**
 * print_array - prints n elements of an array of integers.
 * @n: elements parameter input
 * @a: string parameter input
 * Return: Always 0
 */

void print_array(int *a, int n)

{

	int i;

	for (i = 0; i < n; ++i)

	{

		if (i != (n - 1))

			_putchar("%d, ", a[i]);

		else

			_putchar("%d", a[i]);

	}

	_putchar("\n");

}