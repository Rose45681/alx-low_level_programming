#include <stdio.h>


/**
 * main - print the alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchr(le);

	putchar('\n');

	return (0);
}
