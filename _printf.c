#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints anything
 * @format: the format string
 * Author: Lawal Oladayo
 *
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0;
    va_start(args, format);

while (format[i] != '\0')
    {
        if (format[i] != '%')
            _putchar(format[i]);
    else
    {
        if (format[i + 1] == 'c')
            _putchar(va_arg(args, int));
                i++;
    }
    i++;
    }

    va_end(args);

    return (0);
}
