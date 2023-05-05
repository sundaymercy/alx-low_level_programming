#include "main.h"

/**
 * get_bit - returne  the real  value of a bit at a given index
 * @n: unsigned int -the bit
 * @index:index unsigned int
 * Return: bit at given index else -1 if error accured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

n >>= index;
	if ((n & 1) == 1)
	return (1);
	else
	return (0);
}
