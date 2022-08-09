#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* _printf - this performs the functon of printf.
* @format: the format string.
*
* Return: the number of printed character.
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;

	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _print_char(args);
					i += 2;
					break;

				case 's':
					count += _print_string(args);
					i += 2;
					break;

				case '%':
					_putchar('%');
					count++;
					i += 2;
					break;

				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}
		}
		if (format[i] != '\0')
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
