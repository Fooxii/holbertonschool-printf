#include "main.h"
#include <stdarg.h>
#include <unistd.h>



int pick_specifier(const char *format, va_list args)
{
if (*format == 'c') /*if character after '%' is c, then*/
{
return (print_char(args)); /* returns whatever value print_char gives you*/
}
if (*format == 's') /*if character after '%' is s, then*/
{
return (print_string(args));
}
if (*format == 'd' || *format == 'i') /*if character after '%' is d or i, then*/
return print_int(args);


/* Unknown specifier */
write(1, '%', 1);
write(1, format, 1);
return (2); /*returns 2, which is then added to count in _printf.c*/
}
