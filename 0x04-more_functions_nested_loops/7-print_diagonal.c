#include "main.h"
/**
 * print_line - a function that prints a diagonal line
 * @n: input number of times '\' should be printed
 * @: we are here
 * Description: this is a description
 *
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int co, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1; sp < co; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
