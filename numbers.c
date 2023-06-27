#include "main.h"

/**
 * printint - prints integers
 * @r: va_list integer to be printed
 */
void printint(int r)
{
	int val;

	if (!r)
		_putchar(r);
	if (r < 0)
	{
		_putchar('-');
		r = -r;
	}
	val = r % 10;
	r = r / 10;
	if (r)
		printint(r);
	_putchar(val + '0');
}
