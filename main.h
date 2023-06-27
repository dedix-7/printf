#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


int _putchar(char c);
int printint(int r);
int _puts(char *str);
int _printf(const char *format, ...);
void get_int(int number);
int choice(va_list args, char r);

#endif /* MAIN_H*/

