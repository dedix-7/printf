#ifndef _PRINTF_H_
#define _PRINTF_H_

#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>

int _putchar(char c);
int printint(long long int r);
int _puts(char *str);
int _printf(const char *format, ...);
/**
 * struct choice - struct to hold a function pointer and spe
 * @i: format specifier
 * @choice: function pointer to choicve
 * Description: A struct to hold a pointer
 * to a function taht will execute on the user's choice
 * 
 */
#endif /* _PRINTF_H_ */
