#include <stdio.h>
/* 
* main - fonction print alphabets
*
* description:pront alphabetic upercase and lowercase
*
* Return: sucess
*/
int main(void)
{
char i, j;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n')
return (0);
}
