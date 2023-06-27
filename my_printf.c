#include "main.h"
/**
 * _printf - print fornmatted output to screen
 * @format - string
 * Return: character count
 */
int _printf(const char *format, ...)
{
	int index = 0, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			count++;
			index++;
			continue;
		}
		else if (format[index] == '%')
		{
			index++;
			count += choice(args, format[index]);
			index++;
			continue;
		}
		index++;
	}
	va_end(args);
	return (count);
}
