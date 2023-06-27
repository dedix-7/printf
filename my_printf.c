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
		return (-1);

	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
<<<<<<< HEAD
			count++;
=======
		}
		else if (format[index + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			index++;
		}
		else if (format[index + 1] == 's')
		{
			value = _puts(va_arg(args, char *));
			count += (value - 1);
			index++;
		}
		else if (format[index + 1] == '%')
		{
			_putchar('%');
			index++;
		}
		else if ((format[index + 1] == 'd') || (format[index + 1] == 'i'))
		{
			count += printint(va_arg(args, int));
			index++;
>>>>>>> c37a6379115f4a5d82dd51cf20338492dde1830e
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
