#include "main.h"
/**
 * _memset- filles memory with aconstant byte
 * @s:source string
 * @b: the content byte for filling
 * @n: length of butter
 * Return : new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);

}
