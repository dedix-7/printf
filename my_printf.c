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
<<<<<<< HEAD
		else if (format[i + 1] == 's')
		{
			val = _puts(va_arg(list, char *));
			i++;
			count = (val - 1);
=======
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
>>>>>>> fb4c5c7afb0c38e0f2286154b09a6a964c02a8e2
		}
		count += 1;
	}
	va_end(list);
	return (count);
}
