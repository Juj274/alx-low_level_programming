#include "main.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed to by dest
 * @src: sourse to copy
 * @dest: destinstion of copy
 *
 * Return: pointe to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;

	}
	*(dest + i) = '\0';
	return (dest);

}

