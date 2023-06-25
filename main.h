#ifndef _PRINTF_H_
#define _PRINTF_H_

#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>

int printinteger(long long int r);
int _putchar(char c);
int printint(va_list r);
int _puts(va_list r);
int _printf(const char *format, ...);
int printstr(char *str);
/**
 * struct choice - struct to hold a function pointer and spe
 * @i: format specifier
 * @choice: function pointer to choicve
 * Description: A struct to hold a pointer
 * to a function taht will execute on the user's choice
 * 
 */
#endif /* _PRINTF_H_ */
