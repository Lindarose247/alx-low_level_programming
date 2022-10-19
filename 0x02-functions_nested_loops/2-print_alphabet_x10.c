#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int ten;

	char letter;

	for (ten = 0; ten <= 9; ten++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)

			_putchar(letter);

				_putchar('\n');
	}
}
