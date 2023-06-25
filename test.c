#include "main.h"
#include <stdio.h>

int main(void)
{
        char letter = 'a';
        char name[] = "Moses omondi";
        int r_val, r_val2;

        /* Using standard library*/
        r_val = printf("%c man\n", letter);
        printf("r_value is %d\n", r_val);
	r_val = printf("%s is %c man\n", name, letter);
	printf("r_value is %d\n", r_val);

        /* Using my own printf*/
        puts("/***********/");
        r_val2 = _printf("%c man\n", letter);
        printf("r_val2 is %d\n", r_val2);
	r_val2 = printf("%s is %c man\n", name, letter);
        printf("r_value is %d\n", r_val2);


        return (0);
}

