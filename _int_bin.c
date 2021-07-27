#include "holberton.h"

/**
 * _int_bin - print integer to binary
 * @n: integer to be printed
 *
 * Return: size
 */
void _int_bin(int n)
{
/*	int counter = 0;
*/
	if ((n % 2) == 0)
	{
		_putchar(0);
/*		counter += 1;
*/	}
	else
	{
		_putchar (1);
/*		counter += 1;
*/	}
	if ((n / 2) != 0)
		_int_bin(n / 2);
return;
}
