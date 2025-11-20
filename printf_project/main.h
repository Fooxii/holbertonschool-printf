#ifndef MAIN_H
#define MAIN_H
/*
 * Header should be include guarded
 */

int _printf(const char *format, ...); /* Provided prototype */ 
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int pick_specifier(const char *format, va_list args);

#endif /* MAIN_H */
