#include "holberton.h"

/**
 * _print_string - prints string
 * @string: string to be printed
 *
 * Return: string length
 */

int _string_print(char *string)
{
	int i;

	if (string == NULL)
		string = "(null)";

	else
	{

	for(i = 0; string[i]; i++)
		_putchar(string[i]);
	}
	return(i);
}
