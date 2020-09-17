#include "palindrome.h"
#include <stdio.h>

/**
 * is_palindrome - checks whether or not a given unsigned int is palindrome.
 * @n: number given
 * Return: 1 if n is palindrome or 0 if not.
 **/

int is_palindrome(unsigned long n)
{
	unsigned int tmp, other, num;

	other = 0;
	tmp = n;

	while (n != 0)
	{
		num = n % 10;
		other = other * 10 + num;
		n = n / 10;
	}

	if (tmp == other)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
