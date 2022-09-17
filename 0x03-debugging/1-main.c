#include <stdio.h>
/**
 * main - create ainfinite loop
 *
 * Return: Always return 0 when succrfull
 */
int main(void)
{
	printf("Infinite loop incoming :(\n");
	int i;
	i = 0;

	while (i > 10)
	{
		putchar(i);
	}

	printf("Infinite loop evoided! \\o/\n");
	return (0);
}
