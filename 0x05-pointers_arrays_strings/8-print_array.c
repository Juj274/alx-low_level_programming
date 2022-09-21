#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n times the element of an array.
 * @a: the pointer of the element.
 * @n: the times to print the elements.
 */
void print_array(int *a, int n)
{
	int i;

	for (i=0; i < n; i++)
	{
		printf("%d", a[i]);
		
		if (i < n -1)
		{
			printf(", ");
		}


	}
	printf("\n");

}
