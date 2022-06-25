/*
 * Auth: @womamire
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: Pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *x;

	if (size <= 0)
		return (0);

	x = malloc(sizeof(char) * size);

	if (x == 0)
		return (0);

	for (n = 0; n < size; n++)
		*(x + n) = c;

	*(x + n) = '\0';

	return (x);
}
