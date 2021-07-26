#include "holberton.h"

/**
 * nbr_size - counts length returned
 * @n: int to be printed
 *
 * Return: number of ints printed
 */

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
 * Return: nbr of ints to be printed
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
