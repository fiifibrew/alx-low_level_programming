#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints alphabets in lowercase without q & e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph = 'a';

	while ( alph <= 'z' )
	{
		if (alph != 'q' && alph != 'e')
		{
		putchar(alph);
		}
		alph++;
	}
		putchar ('\n');


	return (0);
}
