#include "main.h"

/**
 *
 * printinteger - prints integers
 * @r: va_list integer to be printed
 * Return: number of digits printed
 */
int printinteger(long long int r)
{
	long long int remainder, quotient, number = 0;

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
		number = number + (printinteger(quotient));
		_putchar(remainder + 48);
		number++;
	}
	return (number);
}
/**
 * printint - convert a va_list btype to int
 * @number: va_list
 * Return: number of digits
 */
int printint(va_list number)
{
	long long int digitcount, integer;

	integer = va_arg(number, long long int);
	digitcount = printinteger(integer);
	return (digitcount);
}
