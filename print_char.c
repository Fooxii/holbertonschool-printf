#include <stdarg.h> /* for va_list */
#include <unistd.h> /* for write() */
#include "main.h" /* prototype */

/**
 * print_char / prints one character
 * @args: list of the arguments
 * Return: the number of characters printed 1
 */
int print_char(va_list args)
{
char c;

c = va_arg(args, int);

write(1, &c, 1);

return (1);
}
