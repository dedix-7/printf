#ifndef _PRINTF_H_
#define _PRINTF_H_

#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>


int _putchar(char c);
int printint(va_list r);
int _puts(char *r);
int _printf(const char *format, ...);

#endif /* _PRINTF_H_ */
