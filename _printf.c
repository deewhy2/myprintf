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
  int i = 0;
  while (format[i] != '\n')
  {
    _putchar(format[i]);
    i++;
  }

  return 0;

}