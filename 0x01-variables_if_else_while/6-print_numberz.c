#include <stdio.h>
#include <unistd.h>
/**
 * main - my main
 *
 * Description:programs in here
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)

		putchar(i + '0');
	putchar('\n');

	return (0);
}
