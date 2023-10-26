#include "main.h"
#include <stddef.h>
/**
* binary_to_uint - function that converts a binary number to unsigned int
* @b: pointer
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i = 0;
if (b == NULL)
return (0);
while (b[i] == '0' || b[i] == '1')
{	
val <<= 1;
val += b[i] - '0';
i++;
}
return (val);
}
