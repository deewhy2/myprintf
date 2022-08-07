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
	int num_char_prntd = 0;
	char *str = NULL;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			{
			_putchar(format[i]);
			num_char_prntd++;
			}
		else
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				num_char_prntd++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				k = 0;
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					num_char_prntd++;
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				num_char_prntd++;
			}
		}
		i++;
    }
<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> ab3f2994c66edbd6b711057c2158525b032390c4
=======
	
>>>>>>> 95600984f614ec4b6b411bedc4a210a5ca0090ea
	va_end(args);

	return (num_char_prntd);
}
