#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * Description: this is a description
 *
 * Return: 0 to 9 followed by newline
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
