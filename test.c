#include <stdio.h>
#include "main.h"

int main(void)
{
    char ctest = 'a';
    char *stest = "string";
    char *null_str = (void *)0;
    int itest = 1234;
    int dtest = 8;
    int ret1, ret2;

    printf("Testing format specifiers\n");
    _printf("Testing format specifiers\n");

    /* CHAR */
    _printf("Char format specifier %c\n", ctest);
    printf("Char format specifier %c\n\n", ctest);

    /* STRING */
    _printf("String format specifier %s\n", stest);
    printf("String format specifier %s\n\n", stest);

    /* STRING NULL */
    _printf("NULL string: %s\n", null_str);
    printf("NULL string: %s\n\n", null_str);

    /* INTEGER */
    _printf("Integer format specifier %i\n", itest);
    printf("Integer format specifier %i\n\n", itest);

    /* DIGIT (%d uses same handler) */
    _printf("Digit format specifier %d\n", dtest);
    printf("Digit format specifier %d\n\n", dtest);

    /* PERCENT */
    _printf("Percent format specifier %%\n");
    printf("Percent format specifier %%\n\n");

    /* INVALID: test return -1 */
    ret1 = _printf("%");
    printf("_printf(\"%%\") returned: %d\n\n", ret1);

    /* MULTIPLE SPECIFIERS */
    _printf("Multiple: %c %s %i\n", ctest, stest, itest);
    printf("Multiple: %c %s %i\n\n", ctest, stest, itest);

    /* RETURN VALUE TEST */
    ret1 = _printf("Test %c %d %s\n", 'X', 123, "ABC");
    ret2 = printf("Test %c %d %s\n", 'X', 123, "ABC");
printf("_printf returned %d, printf returned %d\n", ret1, ret2);

return (0);
}
