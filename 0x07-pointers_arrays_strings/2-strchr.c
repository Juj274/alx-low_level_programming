#include "main.h"

/**
 * _strchr - prints from the first occurance of a char
 * @s:sorce string
 * @c: tested char
 *
 * Return: new string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*s != c)
			s++;

	}
	if (*s == c)
		return (s);
	else
		return (0);
}
