#include<stdio.h>
#include<unistd.h>
#include<string.h>

/**
 * main - Entry point
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19"'
 * Return: Always 0 (success)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
