#include "main.h"

/**
 *_printf - printf function
 *@format: number of arguments
 *@...: arguments passed
 *Return: chars printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	unsigned int i = 0, val = 0;
	va_list list;

	va_start(list, format);
	for (; format[i] != '\0' ; i++)
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
		else if (format[i + 1]) == 's')
	  	{
			val = _puts(va_arg(list, char *));
			i++;
		}
		else if (format[i + 1] == 'i')
		{
			val = printint(va_arg(list, int));
			i++;
		}
		else if(format[i + 1] == 'd')
		{
			val = printint(va_arg(list, int));
			i++;
		}
		count += 1;
	}
	va_end(list);
	return (count);
}
