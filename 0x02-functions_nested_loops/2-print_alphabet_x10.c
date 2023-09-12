#include "main.h"
/*
* main - function alphabet
*
* Return : Sucess 
*/
void print_alphabet_x10(void)
{
int i = 0;
char alph = 'a';
while (i <= 10)
{
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
i++;
}
_putchar('\n');
}
