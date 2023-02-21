#include "main.h"
/**
 * prints_alphabet - function that prints in lower case
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchr(i);
	_putchar('\n');
}
