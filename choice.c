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
		case 'i':
			count += printint(va_arg(r, int));
			break;
		case '\0':
			return (-1);
		default:
<<<<<<< HEAD
			count += _putchar('%');
			count += _putchar(str);
=======
			_putchar('%');
			count++;
			_putchar(str);
			count++;
>>>>>>> fbf807b4416ffc7872d78376c36626b151a9c31f
			break;
	}
	return (count);
}
