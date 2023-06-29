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
	char c;

	switch (str)
	{
		case 'c':
			c = va_arg(r, int);
			count += _putchar(c);
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
		case 'u':
			count +=printint(va_arg(r, unsigned int));
			break;
		case 'b':
			count += printbin(va_arg(r, unsigned int));
			break;
		default:
			_putchar('%');
			count++;
			_putchar(str);
			count++;
			break;
	}
	return (count);
}
