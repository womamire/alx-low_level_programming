#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */

char *_strdup(char *str)
{
	int x, i;
	char *s;

	if (str == NULL)
		return (0);

	x = 0;
	while (*(str + l))
		l++;

	s = malloc(sizeof(char) * x + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= x; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
