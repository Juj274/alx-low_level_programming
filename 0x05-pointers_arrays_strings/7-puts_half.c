#include "main.h"

/**
 *
 * puts_half - prints the second half of a string
 * @str: string to print.
 *
 * Return:  void.
 *
 */
void puts_half(char *str)
{
	int pace;
	int finalpace;
	int i;

	while (*(str + pace) != 0)
	{
		pace++;

	}
	pace--;
	if (pace % 2 == 0)
	{
		finalpace = pace / 2;
	}
	else
	{
		finalpace = (pace -1) / 2;
	}
	for (i = finalpace + 1; i <= pace; i++)
	{
		_putchar(*(str +i));
	}
	_putchar('\n');




}
