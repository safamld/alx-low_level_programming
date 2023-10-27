#include "main.h"
/**
* binary_to_uint - function that converts a binary number to unsigned int
* @b: pointer
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_val = 0;
int i = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_val = 2 * dec_val + (b[i] - '0');
}
return (dec_val);
}
