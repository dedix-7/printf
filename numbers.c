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
/**
 * printbin - prints a binary conversion of an int
 * @num: number to be converted
 * Return:number of characters
 */
int printbin(long int num)
{
	int remainder, quotient, count = 0;

	if (num < 0)
	{
		_putchar(1 + 48);
		count += 1;
		num = -num;
	}
	if (!num)
	{
		_putchar(48);
		return (1);
	}
	quotient = num / 2;
	remainder = num % 2;
	if (quotient)
		count += printbin(quotient);
	count += _putchar(remainder + 48);
	return (count);
}
/**
 * printoctal - print numbers to base 8
 * @num: number to be converted
 * Return: nunmber of bits
 * has npo sign
 */
int printoctal(long int num)
{
	int remainder, quotient, count = 0;

	if (num < 0)
	{
		_putchar(1 + 48);
		count += 1;
		num = -num;
	}
	quotient = num / 8;
	remainder = num % 8;
	if (quotient)
		count += printbin(quotient);
	count += _putchar(remainder + 48);
	return (count);
}
/**
 * printhex - print numbers tio base 16
 * @num: number to be converted
 * Return: number of digits
 */
int printhex(long long int num)
{
	int remainder, quotient, count = 0;

	if (num < 0)
	{
		_putchar('-');
		count += 1;
		num = -num;
	}
	quotient = num / 16;
	remainder = num % 16;
	if (quotient)
		count += printbin(quotient);
	if (remainder < 10)
		count += _putchar(remainder + 48);
	else if (remainder >= 10)
		count += _putchar(reminder + 55);
	return (count);
}
