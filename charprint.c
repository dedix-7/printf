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
 * choice - choose sspecifier and print it
 * @r: variable list
 * @str: character specofgier
 * Return: number of digits
 */
int choice(va_list r, char str)
{
	int count = 0;

		switch (str)
		{
			case 'c':
				count +=_putchar(va_arg(r, int));
				break;
			case 'd':
				count += printint(va_arg(r, int));
				break;
			case 'i':
				count += printint(va_arg(r, int));
				break;
			case 's':
				count += _puts(va_arg(r, char *));
				break;
			case '%':
				count += _putchar('%');
			default:
				_putchar(str);
				count++;
				break;
		}
		return (count);
}
