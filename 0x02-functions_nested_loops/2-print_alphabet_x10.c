#include "main.h"

/**
<<<<<<< HEAD
 * print_alphabet_x10 
 * Prints 10 times the alphabet
 * in lowercase.
=======
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
>>>>>>> e4a025eda67a202643dcbbaac9e1ad9d256a018a
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
<<<<<<< HEAD
		  _putchar(letter);
		  _putchar('\n');
	}
}
=======
			_putchar(letter);
		_putchar('\n');
	}
}
>>>>>>> e4a025eda67a202643dcbbaac9e1ad9d256a018a
