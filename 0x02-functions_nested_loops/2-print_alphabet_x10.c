#include "main.h"
/**
* print_alphabet_x10 - function alphabet.
*
* Return : Always 0
*/
void print_alphabet_x10(void)
{
int i = 0;
char alph = 'a';
while (i < 10)
{
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
alph = 'a';
i++;
}
}
