#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 9) + '0');
		if (num == 10)
			continue;
		
		        putchar(',');
			putchar(',');
	}
	
	putchar('\n');
	return (0);
}
