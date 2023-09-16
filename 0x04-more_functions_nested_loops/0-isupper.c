#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: Variable text
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
