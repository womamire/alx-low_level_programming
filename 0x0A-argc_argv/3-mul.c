/*
 * Auth: @womamire
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int n, x;

	x = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		x = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (x);
}
