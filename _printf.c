#include "holberton.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, ck = 0, counter = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

		va_start(list, format);
	for (i = 0; format[i] != '\0' ; i++)
	{
		if (!ck)
		{
			if (format[i] != '%')
			{
				counter += _putchar(format[i]);
				}

			else if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else
				ck = 1;
		}
		else
			{
			switch (format[i])
			{
			case 'c':
				counter += _putchar(va_arg(list, int));
				break;
			case 's':
				counter += _string_print(va_arg(list, char *));
				break;
			case '%':
				counter += _putchar('%');
				break;
			case 'd':
				counter += _num_print(va_arg(list, int));
				break;
			case 'i':
				counter += _num_print(va_arg(list, int));
				break;
			case '\n':
								_putchar(10);
				break;
			case 'R':
				counter += _rot13(va_arg(list, char*));
				break;
				case 'r':
				counter += _rev_string(va_arg(list, char*));
				break;
			case 'b':
				counter += _int_to_bin(va_arg(list, int));
				break;
			default:
				counter += _putchar('%');
				counter += _putchar(format[i]);
			}
			ck = 0;
		}
	va_end(list);
	}
	return (counter);
}
