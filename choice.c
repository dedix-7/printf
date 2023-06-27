#include "main.h"

/**
 *choice - choose specifier and print it
 *@r: variable list
 *@str: character specifier
 *Return: number of digits printed
 */

int choice(va_list r, char str)
{
	int count = 0;

	switch (str)
	{
		case 'c':
			count += _putchar(va_arg(r, int);
			break;
		case 's':
			count += _puts(va_arg(r, char *));
			break;
		case '%':
			count += _putchar('%');
			break;
		case 'd':
		case 'i':
			count += printint(va_arg(r, int));
			break;
		case ' ':
			count += printspace(va_arg(r, int));
			break;
		default:
			count += _printf("%%%c", str);
			break;
	}
	return (count);
}
