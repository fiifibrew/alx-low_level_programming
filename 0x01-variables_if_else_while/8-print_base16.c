#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program will print base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{

		putchar(n);
	}

	for (n = 'a'; n <= 'f'; n++)
	{

		putchar(n);
	}

		putchar('\n');

	return (0);
}
