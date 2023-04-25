#include "main.h"

/**
 * str_print - it format string
 * @str:pointer
 *Return: number of characters
 */

int str_print(char *str)
{
	char *a = str;

	if (str == NULL)
		str = "(null)";
	while (*str)
		_putchar(*str++);
	return (str - a);

}



