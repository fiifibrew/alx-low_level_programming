#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program combinations of single digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		putchar(num1 + '0');
	if (num1 != 9) 
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
