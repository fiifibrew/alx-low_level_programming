#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10
 * return: void
 */
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i <= 9)
	{
	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
	i++;
	}
}
