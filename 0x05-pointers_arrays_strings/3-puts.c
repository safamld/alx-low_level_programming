#include "main.h"
/**
* _puts - print string
*
* @str : the string that i will print
*
* Return: nothing
*/
void _puts(char *str)
{
while (*str != '/0')
{
_putchar(*str);
_putchar('\n');
}
}
