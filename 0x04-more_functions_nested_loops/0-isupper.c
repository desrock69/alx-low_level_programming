#include <stdio.h>
#include "main.h"
/**
_isupper - a function that checks for uppercase character
 * @c: input
 * Description: this is a description
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
