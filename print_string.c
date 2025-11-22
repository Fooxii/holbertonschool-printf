#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_string
 * @args: list of arguments
 * Return: number of characters in which are printed
 */
int print_string(va_list args)
{
    char *str;
    int i = 0;

    str = va_arg(args, char *); 

    if (str == (void *)0)   /* handles NULL string */
        str = "(null)";

        while (str[i] ~!= '\0')
        {
            write(1, &str[i], 1); /* print char */
            i++;
        }
        
    return (i); /* number of printed characters */
}
