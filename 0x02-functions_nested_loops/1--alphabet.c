#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: 0 on success
 */
int print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
