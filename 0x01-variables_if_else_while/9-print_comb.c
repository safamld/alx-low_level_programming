#include <stdio.h>
/*
* main - function de digit
*
* description: print num en un seule ligne
*
* Return: sucess
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
