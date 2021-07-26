#include "holberton.h"

/**
 * _rot13 - prints the rot13'ed string
 * @s: string
 * Return: int
 */

int _rot13(char *s)
{
	int i, j, counter = 0;

	char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == letters[j])
			{
				_putchar(rot13[j]);
				counter++;
				break;
			}
			if (s[i] == '\0')
			{
				_putchar(s[i]);
				counter++;
			}
		}
			}
	return (counter);
}
