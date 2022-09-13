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
	char lower_case_char;
	char upper_case_char;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		lower_case_char = tolower(chr);
		putchar(lower_case_char);
	}
	for (j = 'a'; j <= 'z'; j++)
	{
		upper_case_char = toupper(j);
		putchar(upper_case_char);
	}
			putchar('\n');
			return (0);
}
