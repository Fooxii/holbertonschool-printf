#include "main.h"

/**
 * pick_specifier - function that picks what to format specifier was found
 * @format: character after '%'
 * @args: arguments passed by variadic function
 * Return: sends to function specific to specifier found
 */

int pick_specifier(char format, va_list args)
{
if (format == 'c')
{
return (print_char(args));
}

if (format == 's')
{
return (print_string(args));
}

if (format == 'd' || format == 'i')
{
return (print_int(args));
}

if (format == '%')
{
return (print_percent());
}

/* Unknown specifier: print "%x" */
write(1, "%", 1);
write(1, &format, 1);
return (2);
}
