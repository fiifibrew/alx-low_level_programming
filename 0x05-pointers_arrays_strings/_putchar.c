#include <unistd.h>

/**
 *  _putchar - writes the character a to stdout
 *  @a: The character to print
 *  return: on success 1.
 *  in error, -1 is retuurned, and ermo is set appropriately.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
