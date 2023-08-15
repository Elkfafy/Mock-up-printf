#include "main.h"
/**
 * print_number - print number
 * @num: input number
 */
void print_number(int num)
{
	char *number;
	int i, buffer_size = 0, divid_holder, num_holder = num, sign = 1;

	while (num_holder != 0)
	{
		buffer_size++;
		num_holder /= 10;
	}
	number = malloc((buffer_size + 1) * sizeof(char));
	if (number == NULL)
	{
		print_string("lack of memory\n");
		return;
	}
	i = buffer_size;
	number[buffer_size] = '\0';
	num_holder = num;
	i -= 1;
	for (; i >= 0; i--)
	{
		divid_holder = num_holder % 10;
		if (divid_holder < 0)
		{
			if (sign == 1)
				sign *= -1;
			divid_holder *= -1;
		}
		number[i] = divid_holder + '0';
		num_holder /= 10;
	}
	if (sign == -1)
		_putchar('-');
	print_string(number);
	_putchar('\n');
}
