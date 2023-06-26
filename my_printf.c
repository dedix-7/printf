#include "main.h"

/**
 *_printf - printf function
 *@format: number of arguments
 *@...: arguments passed
 *Return: chars printed
 */

int _printf(const char *format, ...)
{
	unsigned int count = 0, digits;
	const char *p;
	va_list list;

	va_start(list, format);
	for (p = format; *p; p++)
	{
		if (*p != '%')
		{
			_putchar(*p);
			count++;
			continue;
		}
		switch (*++p)
		{
			case 'c':
				digits = _putchar(va_arg(list, int));
				count += digits;
				break;
			case 'd':
				digits = printint(va_arg(list, int));
				count += digits;
				break;
			case 'i':
				digits = printint(va_arg(list, int));
				count += digits;
				break;
			case 's':
				digits = _puts(va_arg(list, char *));
				count += digits;
				break;
			default:
				_putchar(*p);
				count++;
			break;
		}
	}
	va_end(list);
	return (count);
}
