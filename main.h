#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

#define BUFFER 1024

int _putchar(char c);
int printint(int r);
int _puts(char *str);
int _printf(const char *format, ...);
int choice(va_list r, char str);
int printbin(long int num);
int printoctal(long int num);
int printhex(long long int num);

/**
 * struct choice - struct to nhold the choice of a person
 * @spec: format specifier
 * @point: function pointer to a function that takes a va_list
 * and returns an integer, count of characters
 * Description: to be held in an array so teh functions loops
 * as opposed to using switch case statements and if else ladders.
 */
struct choice
{
	char spec;
	int (*point)(va_list arg);
};
/**
 * point - typedef for choice
 */
typedef struct choice point;

#endif /* MAIN_H*/
