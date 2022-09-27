#include "main.h"
/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: source string
 * @needle: searching string
 *
 *
 * Return: new string
 */
char *_strstr(char *haystack, char *needle)
{
	char *hayptr, *ndlptr;

	while (haystack != 0)
	{
		hayptr = haystack;
		ndlptr = needle;

		if (*ndlptr == 0)
			return (haystack);
		while (*hayptr != 0)
		{
			if (*hayptr != *ndlptr)
				break;
			hayptr++;
			ndlptr++;
			if (*ndlptr == 0)
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
