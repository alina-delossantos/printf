#include "holberton.h"

/**
 * nbr_size - counts size returned
 * @n: int to be printed
 *
 * Return: size printed
 */
/**
 * _int_to_bin - print integer to binary
 * @n: integer to be printed
 *
 * Return: size
 */

int _int_to_bin(unsigned int n)
{
	int count = 0;

	if ((n % 2) == 0)
	{
		_putchar(0);
		count += 1;
	}
	else
	{
		_putchar (1);
		count += 1;
	}
	if ((n / 2) != 0)
		_int_to_bin(n / 2);
	else
	return(count);
}
