#include "main.h"

/**
 *
 * printint - prints integers
 * @r: va_list integer to be printed
 * Return: number of digits printed
 */
int printint(int r)
{
	int remainder, quotient, number = 0;

	if (r < 0)
	{
		_putchar('-');
		number++;
		r = -r;
	}
	remainder = r % 10;
	quotient = r / 10;
	if (r == 0)	{
		_putchar(48);
		number++;
		_putchar(48);
		number++;
		return (number);
	}
	if (quotient == 0)
	{
		_putchar(remainder + 48);
		number++;
		return (number);
	}
	if (remainder < quotient)
	{
		number = number + (printint(quotient));
		_putchar(remainder + 48);
		number++;
	}
	return (number);
}
