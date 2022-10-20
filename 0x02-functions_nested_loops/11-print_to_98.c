#include "main.h

/**
*times_table(int n);- Prints the n time table
*@n: number times (0 < n <= 15)
*/
void times_table(int)
{
	int a, b, op;

	if (n>=0 && n <= 15)
	{
		for (a= 0; a <= n; a++)
		{
			_putcher(48);
			for (b = 1; b <= n; b++)
			{
				op = a * b;
				_putcher(44);
				_putcher(32);
				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(op + 48);
				}
				else if (op <=99)
				{
					_putchar(32);
					_putchar((op / 10) + 48);
					_putchar((op % 10) +48);
				}
				else
				{
					_putchar(((op / 100) % 10) + 48);
					_putchar(((op / 10) % 10) +48);
					_putchar((op % 10) + 48);
				}

			}
			_putchar('\n');
		}

	}

}
