#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - this is putchar
 *
 * Description:program runs
 *
 * Return: 0
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z' chr++)
	{
		chr = tolower(chr);
		putchar(chr);
	}
	putchar('\n');

	return (0);
