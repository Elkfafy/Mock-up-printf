#include "main.h"
/**
 * print_string - print string
 * @str: input string
 */
void print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
