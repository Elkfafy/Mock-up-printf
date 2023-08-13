#include "main.h"
/**
 * printf - printf function
 * @format: input format string
 */
void printf(char *format, ...)
{
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		switch format[i]
		{
			case D:
			case d:
				print_num(va_arg(args, int));
				break;
			case C:
			case c:
				_putchar(va_arg(args, char));
				break;
			case S:
			case s:
				print_string(va_arg(args, char *));
				break;
		}
	}
	_putchar('\n');
	return (0);
}
