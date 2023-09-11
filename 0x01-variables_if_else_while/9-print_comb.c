#include <stdio.h>
/*
* main - function de digit
*
* description: Function that return digit numbers separated by comma.
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
