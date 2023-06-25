#include "print.h"
/**
 * _putchar - print a character tp stdout
 * @c: character to print
 * Return: 1 on success
 * - 1 o errorn
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - print a string to stdout
 * @str: string to print
 * Return: number of characters printed
 */
int _puts(va_list str)
{
	char *print;
	int number;

	print = va_arg(str, char *);
	number = write(1, print, 1);
	return (number);
}
	
  
