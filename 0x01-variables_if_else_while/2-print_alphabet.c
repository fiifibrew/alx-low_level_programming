#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints alphabets in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph = 'a';

	while ( alph <= 'z' )
	{
		putchar(alph);
		alph++;
	}
	putchar ('\n');


	return (0);
}
