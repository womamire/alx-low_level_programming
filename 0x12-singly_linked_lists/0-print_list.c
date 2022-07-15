#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: data type pointer of struct
 * Return: elements of the str i
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0], (nil)");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			i++;
	}
	return (i);
}
