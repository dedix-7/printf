#include "main.h"

/**
 *
 * printint - prints integers
 * @r: va_list integer to be printed
 * Return: number of digits printed
 */
int printint(va_list prnum)
{
	int remainder, quotient, r, number = 0;

	r = va_arg(prnum, int);
	remainder = r % 10;
	quotient = r / 10;
	if (r == 0)
	{
		_putchar(48);
		_putchar(48);
		return (2);
	}
	if (quotient == 0)
	{
		_putchar(remainder + 48);
		return (1);
	}
	if (remainder < quotient)
	{
		number = number + (printint(quotient));
		_putchar(remainder + 48);
	}
	return (number);
}
