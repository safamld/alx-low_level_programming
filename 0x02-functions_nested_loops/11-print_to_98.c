#include "main.h"
/* print_to_98 - Function that print numbers to 98
*
* @n: The number
*
* Return: Empty output
*/
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
_putchar(i + '0');
_putchar(',');
}
}
else (n > 98)
{
for (i = n; i <= 98; i--)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
