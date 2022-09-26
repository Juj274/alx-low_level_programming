#include "main.h"
/**
 * _memset - fillis the array
 * @s:source string
 * @b: the content byte for filling
 * @n: length of butter
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);

}
