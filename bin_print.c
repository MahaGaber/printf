#include "main.h"

/**
 * to_binary - converts number to binary and also prints
 * @n: number to be converted
 * Return: number of characters printed
 */

int to_binary(int n)
{
	int digit[32], i = 0, counter = 0;

	while (n > 0)
	{
		digit[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		num_print(digit[j]);
	}
	return (i);
}


