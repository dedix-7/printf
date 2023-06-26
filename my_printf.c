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
				count += _putchar(va_arg(list, int));
				break;
			case 'd':
				count += printint(va_arg(list, int));
				break;
			case 'i':
				count += printint(va_arg(list, int));
				break;
			case 's':
				count += _puts(va_arg(list, char *));
				break;
			case '%':
				count += _putchar('%');
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
