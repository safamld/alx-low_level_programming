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
if ( i != j)
{
putchar("%d%d", i, j);
j++;
}
}
i++;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
