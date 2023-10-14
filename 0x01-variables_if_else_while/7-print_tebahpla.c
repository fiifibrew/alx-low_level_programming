#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints alphabets in lowercasein reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
		putchar ('\n');


	return (0);
}
