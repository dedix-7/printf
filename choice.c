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
		case 'd':
			count += printint(va_arg(r, int));
			break;
		case 'i':
			count += printint(va_arg(r, int));
			break;
	}
	return (count);
}
