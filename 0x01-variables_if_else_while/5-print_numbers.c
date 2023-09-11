#include <stdio.h>
/* main - function
*
* description: fonction qui affiche digit
*
* Return: sucess
**/
int main(void)
{
int i;
while (i <= 9)
{
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
