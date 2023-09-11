#include <stdio.h>
/*
* main - function hexadecimal
*
* description: print numb hex
*
* Return: sucess
*/
int main(void)
{
char hex_digits[] = "0123456789abcdef";
int n = 0;
while (n < 16)
{
putchar(hex_digits[n]);
n++;
}
putchar('\n');
return (0);
}
