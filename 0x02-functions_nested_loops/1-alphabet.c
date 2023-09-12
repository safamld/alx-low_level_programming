#include "main.h"
/**
* print_alphabet - alphabets
* Return: On success 1
* On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
_putchar(lowercase);
lowercase++;
}
_putchar('\n');
}
