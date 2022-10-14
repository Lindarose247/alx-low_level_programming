#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Prints random number, states whether is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	If(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		perintf("%d is negative\n", n);
	}
	else
	{
		printf("d is zero\n", n);
	}
	return (0);
}
