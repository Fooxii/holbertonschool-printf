#include "main.h"

/**
 * print_int - function that prints an interger
 * @args: list of arguments
 * Return: amount of intergers printed
 */

int print_int(va_list args)
{

int num = va_arg(args, int);
char conv[12];
int i = 0, count = 0;

if (num == 0)
return (write(1, "0", 1));

if (num < 0)
{
count += write(1, "-", 1);
num = num * -1;
}

while (num > 0)
{
conv[i++] = (num % 10) + '0';
num /= 10;
}

while (i--)
count += write(1, &conv[i], 1);

return (count);
}
