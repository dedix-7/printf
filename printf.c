#include "main.h"
/**
 * _printf - print fornmatted output to screen
 * looks to emulate the standard printf
 * @format: string
 * Return: character count
 */
int _printf(const char *format, ...)
{
	int index = 0, count = 0;
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);
	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			count++;
		}
		else
		{
			index += 1;
			if (!format[index])
				return (-1);
			count += choice(args, format[index]);
			index++;
			continue;
		}
		index += 1;
	}
	va_end(args);
	return (count);
}
