#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int pick_specifier(char *format, va_list args)
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
