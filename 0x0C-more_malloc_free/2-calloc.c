#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain
 *	number of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: a pointer to the allocated memoryor NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
