#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number y
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		dec_val = 2 * dec_val + (b[i] - 48);
	}
	return (dec_val);
}
