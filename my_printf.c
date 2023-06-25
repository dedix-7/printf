#include<stdio.h>
/**
 *_printf - printf function
 *@format: number of arguments
 *@...: arguments passed
 *Return: chars printed
 */
int _printf(char *format, ...)
{
    va_list args;
    int printed_chars;

    va_start(args, format);
    printed_chars = vprintf(format, args);
    va_end(args);

    return printed_chars;
}

	/**
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
		count += 1;
	}
	va_end(list);
	return (count);
}
*/
