#include <stdarg.h> /* To handle variable arguments*/
#include <unistd.h> /* Required for write () function to print characters */
#include "main.h" /* Provided: includes the function prototypes as instructed*/

/**
 * _printf - produces output according to a format
 * @format: pointer to string
 * Return: the number of characters printed (excluding null byte)
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

if (*format != '\0')
{
/* picks correct specifier and adds return to the count*/
count += pick_specifier(format, args);
}
else /*if '%' is the last character*/
{
format--; /*goes back to '%' from '\0'*/
write(1, '%', 1); /*prints '%'*/
count++; /*increases count because '%' was printed*/
}

}

else
{
write(1, format, 1); /*else writes the character*/
count++; /* increases count per printed character*/
}
format++;
}
va_end(args);
return (count);
}
