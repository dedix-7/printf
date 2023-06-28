# printf
Recoding printf in C
# About.
This project is about recoding printf in C. It looks to emulate the printf function found in the stdio.h header file.
Other than the characters, printf also prints integres, doubles and other numbers that this project seeks to emulate.
## Basic Algorithm - in printf.c
This algorithm borrows heavily, **or is inspired havily by**, from K & R's example in their brilliant book The C programming language
The function prints each character till it encouters a % or special caracter
It uses putchar, customized but works like the standard printf
See Julien Barbier's repo on alx tools for the original one and see its buffer handling
Once it encounters a % character, it chacks for the conversion specifier(next character) calling the choice function
If the choice does not exists, it prints % and the character that follows it.
On completion it returns the character count.
If there's nothing after percent, it stops printing and returns (-1).
## main.h
The header file that holds all declared functions and included standard libraries
## numbers.c
This file contains the function to print numbers.
Thus far, it only prints integers, positive and negative.
Of course, it can only work for integers defined in C on 64-bit machines or depending on your machine
## charprint.c
This file contains the character printer that works just like the printf function found in the <stdio.h> header.
## choice.c
This takes the specifier and calls the required function. If the characer is not a specifier, it prints % and te character.
It returns the count of digits or characters that have been printed.
## printf.c
This is the printf function that prints characters and called functions when it meets the conversion specifiers
## puts.c
This prints a string and returns the number of chacters in the string, exclusing the null byte of course.

# Authors
Enox - dedix-7
omondi - mosesomo