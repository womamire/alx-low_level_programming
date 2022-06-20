/*
 * Auth: @womamire
 * File: 4-strpbrk.c
 */

#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int woma;

	while (*s)
	{
		for (woma = 0; accept[woma]; woma++)
		{
			if (*s == accept[woma])
				return (s);
		}

		s++;
	}

	return ('\0');
}
