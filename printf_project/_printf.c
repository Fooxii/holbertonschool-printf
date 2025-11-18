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
}
