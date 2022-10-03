#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet x10, in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i;
	char alphabet;

	for (i = 0; i <= 9; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
		_putchar(alphabet);
		}
		_putchar('\n');
	}
}
