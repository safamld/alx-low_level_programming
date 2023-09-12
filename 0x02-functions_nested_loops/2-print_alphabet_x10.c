#include "main.h"
/*
* main - function alphabet.
*
* Return : Always 0. 
*/
void print_alphabet_x10(void)
{
int i = 0;
char alph = 'a';
while (alph <= 'z')
{
while (i <= 10)
{
_putchar(alph);
i++;
}
alph++;
}
_putchar('\n');
}
