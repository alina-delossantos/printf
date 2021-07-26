#include "holberton.h"

int nbr_size(int n)
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
 * _num_print - prints digits
 * @n: integer to be printed
 *
 * Return: n
 */

int _num_print(int n)
{
	unsigned int nbr;

	if (n < 0)
	{
		_putchar('-');
		nbr = n * (-1);
	}
	else
	{
		nbr = n;
	}
	if ((nbr / 10) != 0)
	{

		_num_print(nbr/10);
	}
	_putchar((nbr % 10) + '0');

	return(nbr_size(n));

}
