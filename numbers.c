#include "main.h"

/**
 * printint - prints integers
 * @r: va_list integer to be printed
 * Return: return the number of printed
 */

int printint(int r)
{
	int remainder, quotient, len = 0;

	if (!r)
	{
		_putchar(48);
		return (1);
	}
	if (r == -2147483648)
	{
		len += _puts("-2147483648");
		return (len);
	}
	else if (r < 0)
	{
		len += _putchar('-');
		r = -r;
	}
	remainder = r % 10;
	quotient = r / 10;
	if (quotient)
		len += printint(quotient);
	len += _putchar(remainder + '0');

	return (len);
}
