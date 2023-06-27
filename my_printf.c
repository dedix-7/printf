#include "main.h"
/**
 * _printf - print fornmatted output to screen
 * @format: string
 * Return: character count
 */
int _printf(const char *format, ...)
{
	int index = 0, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (NULL);
	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			count++;
		}
		else
		{
			index++;
			count += choice(args, format[index]);
		}
		index++;
	}
	va_end(args);
	return (count);
}
