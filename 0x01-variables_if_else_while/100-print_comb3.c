#include <stdio.h>
/**
* main - This is the entry point of the code
*
* Return - 0 Successful
*/
int main(void)
{
int i = 0;
int j =1 ;
while (i < 10)
{
while(j < 10)
{
putchar(i + '0')
putchar(i + '0'); 
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
