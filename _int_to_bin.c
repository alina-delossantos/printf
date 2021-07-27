#include "holberton.h"

/**
 * nbr_size - counts size returned
 * @n: int to be printed
 *
 * Return: size printed
 */

int num_size(int n)
{
	int counter = 1;

	if (n < 0)
	{
		counter++;
	}
	for(; (n / 10) != 0; counter++)
		n = n / 10;
	return(counter);
}

/**
 * _int_to_bin - print integer to binary
 * @n: integer to be printed
 *
 * Return: size
 */

int _int_to_bin(unsigned int n)
{
	if ((n % 2) == 0)
	{
		_putchar('1');
	}
	else
	{
		_int_to_bin(n / 2);
	}
return(num_size(n));
}
