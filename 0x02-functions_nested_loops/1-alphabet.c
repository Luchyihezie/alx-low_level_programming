#include "main.h"

/**
 * main - prints alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet(void) // Function prints lowercase alphabet 
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
