#include <stdio.h>
#include <ctype.h>
/**
 * main - my program
 *
 * Description:prints a file
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
