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
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
