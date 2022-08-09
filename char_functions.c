#include "main.h"

/**
* _print_char - prints a character.
* @args: the argument list.
*
* Return: the number of character.
*/

int _print_char(va_list args)
{
	char s = va_arg(args, int);

	_putchar(s);
	return (1);
}

/**
* _print_string - prints a string.
* @args: the argument list.
*
* Return: the number of character.
*/
int _print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
