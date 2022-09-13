#include <stdio.h>
#include <main.h>
/**
 * main -my entry point
 *
 * Description:print ch
 *
 * Return: 0
 */
int main(void)
{
		char *sh = "Holberton";

		while (*sh)

		{
			_putchar(*sh);
			sh++;
		}
		_putchar('\n');
		return (0);
}
