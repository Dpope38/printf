#include "main.h"
/**
 * _printf - To replicate printf
 *
 * Return: always return success (0)
 */
int _printf(const char  *format, ...)
{
    int counter =0;
    va_list arguments;
    
    if (format == NULL)
        return (-1);
    va_start(arguments, format);

    while (*format != '\0')
    {
        if  (*format != '%')
        {
            write(1, format, 1);
            counter++;
        }
        else
        {
            format++;

            if (*format == '\0')
            {
                va_end(arguments);
                return (-1);
            }
        
            switch (*format)
            {
                case 'c':
                {
                    int value = va_arg(arguments, int);
                    write(1, &value, 1);
                    counter++;
                    break;
                }   
                case 's':
                {
                    char *string = va_arg(arguments, char *);
                    if (string != NULL)
                    {
                        write(1, string, strlen(string));
                    }
                    else
                    {
                        write(1, "(NULL)", 6);
                        counter += 6;
                        break;
                    }   
                }
                case '%':
                {
                    write(1, format, 1);
                    counter++;
                    break;
                }
                default:
                {
                    va_end(arguments);
                    return (-1);
                }
        
            }
        }

        format++;
    }
    va_end(arguments);
    return counter;
}
