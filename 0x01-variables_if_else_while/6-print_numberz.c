#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints single digits in base 10 using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
		putchar('\n');
	return (0);
}
