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
while (i <= 0)
{
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
alph ='a';
i++;
}
}
