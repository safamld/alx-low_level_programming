#include "main.h"
/**
* _print_rev_recursion - function tha print reverse string
* @s: char
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
