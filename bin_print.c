#include "main.h"

/**
 * to_binary - converts number to binary and also prints
 * @num: number to be converted
 * Return: number of characters printed
 */

int to_binary(int num)
{
	int digit[10], i, counter = 0;

	for (i = 0; num > 0; i++)
	{
		digit[i] = num % 2;
		num = num / 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		num_print(digit[i]);
		counter++;
	}
	return (counter);
}


