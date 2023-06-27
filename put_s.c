#include "main.h"

/**
 *_puts - this function prints a string
 * @str: string to be printed
 * Return: length of a string
 */

int _puts(char *str)
{
	int len = 0, count = 0;

	if (str == NULL)
	{
		str = "(null)";
		count += _puts(str);
		return (count);
	}
	else if (str)
	{
		while (str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
			count++;
		}
	}
	return (count);
}
