#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 * _putchar only three times
 * Description: this is a description
 *
 * Return: 0-14 x10 folllewed by newline
 */
void more_number(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
		}
		_putchar('\n');
	}
}
