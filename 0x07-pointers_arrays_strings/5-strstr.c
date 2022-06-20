/*
 * Auth: @womamire
 * File: 5-strstr.c
 */

#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located
 */

char *_strstr(char *haystack, char *needle)
{
	int woma;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		woma = 0;

		if (haystack[woma] == needle[woma])
		{
			do {
				if (needle[woma + 1] == '\0')
					return (haystack);

				woma++;

			} while (haystack[woma] == needle[woma]);
		}

		haystack++;
	}

	return ('\0');
}
