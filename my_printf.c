#include "main.h"
/**
 * _printf - print fornmatted output to screen
 * @format: string
 * Return: character count
 */
int _printf(const char *format, ...)
{
	int index = 0, count = 0, value = 0;
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
		}
		else if (format[index + 1] == 'c')
		{
			count += _putchar(va_arg(args, int));
			index++;
		}
		else if (format[index + 1] == 's')
		{
			value += _puts(va_arg(args, char *));
			index++;
			count += value;
		}
		else if (format[index + 1] == '%')
		{
			count += _putchar('%');
			index++;
		}
		else if ((format[index + 1] == 'd') || (format[index + 1] == 'i'))
		{
			index++;
			count += choice(args, format[index]);
		}
		else
			_putchar('%');
		index++;
	}
	va_end(args);
	return (count);
}
