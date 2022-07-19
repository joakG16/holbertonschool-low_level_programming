#include "main.h"

/**
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	char *binary;
	unsigned int dec_val = 0;
	int i = 0;
	int len, base = 1;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	binary = malloc(sizeof(char *) * len);
	if (binary == NULL)
	{
		return (0);
	}
	binary = strcpy(binary, b);
	for (i = len - 1; i >= 0; i--)
	{
		if (binary[i] != '0' && binary[i] != '1')
		{
			return (0);
		}
		if (binary[i] == '1')
		{
			dec_val = dec_val + base;
		}
		base = base * 2;
	}
	return (dec_val);
}
