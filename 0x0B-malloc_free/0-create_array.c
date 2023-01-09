#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: number of characters
 * @c: initial array character
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	if (size == 0)
		return (NULL);
	j = malloc(size * sizeof(char));
	if (j == NULL)
	{
		return (NULL);
	}
	for (i =0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);
}
