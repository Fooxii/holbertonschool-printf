#include "main.h"

/**
 * print_int - prints an integer
 * @args: list of arguments
 * Return: number of characters printed
 */

int print_int(va_list args)
{
int num = va_arg(args, int);
long n = num;
char conv[12];
int i = 0, count = 0;

if (n == 0)
return (write(1, "0", 1));

if (n < 0)
{
count += write(1, "-", 1);
n = -n;
}

while (n > 0)
{
conv[i++] = (n % 10) + '0';
n /= 10;
}

while (i--)
count += write(1, &conv[i], 1);

return (count);
}
