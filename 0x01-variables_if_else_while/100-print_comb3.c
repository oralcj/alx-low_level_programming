#include<stdio.h>
/**
 * main - ENTRY POINT
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* single digits */
		k = i / 10; /* double digits */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
