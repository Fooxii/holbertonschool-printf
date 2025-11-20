#include <stdarg.h> /* To handle variable arguments (va_list, va_start, va_end) */
#include <unistd.h> /* Required for write () function to print characters */
#include "main.h" /* Provided: includes the function prototypes as instructed */

/*
 * _printf - produces output according to a format
 * Prototype provided in main.h
 * Takes a format string and variable arguments
 * Returns the number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
va_list args;
int count = 0;

if (format == (void *)0) /*Checks for null*/
{
return (-1); /*Returns -1 because a successful return should be positive*/
}
va_start(args, format);
while (*format != "\0") /*goes through every char in format pointer*/
{
if (*format == '%') /*if '%' is found check next character*/
{
format++; /* moves format to after the '%'*/

/*Check for character after '%*/

}

else
{
write(1, format, 1); /*else writes the character*/
count++;
}
}
}
