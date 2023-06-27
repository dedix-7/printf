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
			count += printint(va_arg(r, int));
			break;
<<<<<<< HEAD
		case 'i':
			count += printint(va_arg(r, int));
			break;
=======
>>>>>>> 1ff2166e320ff778f4e6bc87adeb7ff1fe6af2f5
		default:
			count += _putchar('%');
			count += _putchar(str);
			break;
	}
	return (count);
}
