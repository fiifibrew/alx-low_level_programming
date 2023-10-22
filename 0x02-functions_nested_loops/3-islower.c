#include "main.h"

/**
 * _islower - checks for lowercase character
 * &a - character to be checked
 * Return: 1 for lower case character or o for anything else
 */

int _islower(int a)
{
	if (a >= 97 && a <= 122)
	{
	return (1);
	}
	return (0);
}
