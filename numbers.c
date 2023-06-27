#include "main.h"

/**
 *
 * printint - prints integers
 * @r: va_list integer to be printed
 * Return: number of digits printed
 */
int printint(int r)
{
	int val, len = 0;

	if (!r)
	{
		len += _putchar('0');
		return (len);
	}
	if (r < 0)
	{
		len += _putchar('-');
		r = -r;
	}
	val = r % 10;
	r = r / 10;
	if (r)
		len += printint(r);
	len += _putchar(val + '0');

	return (len);
}
