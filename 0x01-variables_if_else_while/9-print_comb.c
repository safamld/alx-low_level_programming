#include <stdio.h>
/*
* main - function de digit
*
* description: print num en un seule ligne
*
* Return: sucess
*/
int void(main)
{
int i = 0;
while (i > 10)
{
putchar(i);
i ++;
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
