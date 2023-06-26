#include "main.h"

/**
 *_printf - printf function
 *@format: number of arguments
 *@...: arguments passed
 *Return: chars printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0, val = 0;
	va_list list;

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(list, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			val = _puts(va_arg(list, char *));
			i++;
			count = (val - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			val = printint(va_arg(list, int));
			count += val;
			i++;
		}
		count += 1;
		i++;
	}
	return (count);
}
