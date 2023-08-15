#include "main.h"
#include <limits.h>
/**
 * main - test print number function
 *
 * Return: 0
 */
int main(void)
{
	int input;

	print_number(INT_MIN);
	while(scanf("%d", &input))
		print_number(input);
	return (0);
}
