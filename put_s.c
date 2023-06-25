#include "main.h"

/**
 * printstr - this function prints a string
 * @str: string to be printed
 * Return: length of a string
 */

int printstr(char *str)
{
	int len = 0, count = 0;

	if (str)
	{
		while (str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
			count += 1;
		}
	}
	return (count);
}
/**
 * _puts - convert va_list to str n print
 * @r: va_list argumebt
 * Return: character count
 */
int _puts(va_list r)
{
	int count;
	char *str;

	str = va_arg(r, char *);
	count = printstr(str);
	return (count);
}
