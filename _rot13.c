#include "holberton.h"
/**
 * _rot13 - prints the rot13'ed string
 * @rot: list
 * Return: int
 */

int _rot13(char *s)
{
	int i, j, counter;

	char letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

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
			if(s[i] == '\0')
			{
				_putchar(s[i]);
				counter++;
			}
		}
			}
	return(counter);
}
