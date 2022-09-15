#include "main.h"
/**
 * _isdigit - a function that checks fo ra digit 0-9
 * @c: input
 * Description: this is a description
 *
 * Return: 1 if c is a digit, 0 otherwis
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
