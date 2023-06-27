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
			count++;
		}
		else
		{
			index += 1;
			count += choice(args, format[index]);
		}
<<<<<<< HEAD:printf.c
		index++;
=======
		index += 1;
>>>>>>> 1ff2166e320ff778f4e6bc87adeb7ff1fe6af2f5:_printf.c
	}
	va_end(args);
	return (count);
}
