#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints theh numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Description: this is a description
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%d", b[]);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%d", fb)[];
		else if (i % 3 == 0)
			printf("%s ", f[]);
		else if (i % 5 == 0)
			printf("%s ", b[]);
		else
			printf("%d ", i);
	}
	printf('\n');
	return (0);
}
