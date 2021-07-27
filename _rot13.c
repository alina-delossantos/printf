#include "holberton.h"

/**
 * _rot13 - prints the rot13'ed string
 * @s: string
 * Return: int
 */

int _rot13(char *s)
{
	int i, j, counter = 0;
	char *aux;

	char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	aux = s;

	if (!aux)
		aux = "null";

	for (i = 0; aux[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (aux[i] == letters[j])
			{
				_putchar(rot13[j]);
				counter++;
				break;
			}
			if (letters[j] == '\0')
			{
				_putchar(aux[i]);
				counter++;
			}
		}
			}
	return (counter);
}
