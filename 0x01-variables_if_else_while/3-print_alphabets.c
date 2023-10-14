#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program will print upper and lowercase letters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char l_alph = 'a';
	char u_alph = 'A';

	while (l_alph <= 'z')
	{
		putchar(l_alph);
		l_alph++;
	}


	while (u_alph <= 'Z')
	{
		putchar(u_alph);
		u_alph++;
	}
	

		putchar('\n');
	return (0);
}
