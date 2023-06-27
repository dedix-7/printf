#include "main.h"
/**
 * _putchar - print a character tp stdout
 * @c: character to print
 * Return: 1 on success
 * - 1 o errorn
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
