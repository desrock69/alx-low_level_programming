#include <stdio.h>
#include <ctype.h>
/**
 * main - print out letters
 *
 * Description: this is a description
 *
 * Return: 0
 */
int main(void)
{
	char chr;
	char j;

	for (chr = 'a'; chr <= 'z'; chr++)
		chr = tolower(chr);
	putchar(chr);

	for (j = 'a'; j <= 'z'; j++)
		j = toupper(j);
			putchar(j);

			putchar('\n');
			return (0);
}
