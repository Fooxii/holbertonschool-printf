#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: pointer to string
 * Return: the number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...); /* Provided prototype */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int pick_specifier(char format, va_list args);
int print_int(va_list args);

#endif /* MAIN_H */
