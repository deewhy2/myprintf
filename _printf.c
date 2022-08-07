#include "main.h"
#include <stdarg.h>
#include <stddef.h>

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
int i = 0, k = 0;
char *str = NULL;
    va_start(args, format);

while (format[i] != '\0')
    {
	if (format[i] != '%')
		_putchar(format[i]);
    else
        {
            if (format[i + 1] == 'c')
            {
                _putchar(va_arg(args, int));
                i++;
            }
            else if (format[i + 1] == 's')
            {
                i++;
                str = va_arg(args, char *);
                k=0;
                while (str[k] != '\0')
                {
                    _putchar(str[k]);
                    k++;
                }
                
            }
            else if(format [i+1] == '%')
            {
                i++;
                _putchar('%');
            }
        }
    
    i++;
    }

    va_end(args);

    return (0);
}