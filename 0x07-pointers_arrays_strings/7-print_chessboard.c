/*
 * Auth: @womamire
 * File: 7-print_chessboard.c
 */

#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int woma1, woma2;

	for (woma1 = 0; a[woma1][7]; woma1++)
	{
		for (woma2 = 0; woma2 < 8; woma2++)
			_putchar(a[woma1][woma2]);

		_putchar('\n');
	}
}
