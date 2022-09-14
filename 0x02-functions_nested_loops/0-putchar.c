#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints _putchar and a new line
 *
 * Description:alx program
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = '_putchar';
	int i = 5;

	for (i = 0; i < 8; i++)
	{
		putchar(ch);
	}

	printf(ch);
	/**
		putchar('\n');
		return (0);
	*/
}
