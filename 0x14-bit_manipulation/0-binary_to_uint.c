#include "main.h"

/**
 * binary_to_uint - converts binary num to uint
 * @b: string containing binary num
 * Return: converted num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, c = 1;
	int i;
	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			n += (i * c);
		}
		else if (b[i] != '0')
			return (0);
		c *= 2;
	}
	return (n);
}
