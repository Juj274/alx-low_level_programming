#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charcter
 *
 * Return: -1 isreurned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
