#include <stdio.h>
#include <unistd.h>

/**
 * main - using write, outputs a string to stderr
 *
 * Return: (1) successful exit code per project sec
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
