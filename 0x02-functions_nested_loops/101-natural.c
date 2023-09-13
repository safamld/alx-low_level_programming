#include <stdio.h>
/**
* main - Function list natural number
*
* Description: Function print some of multiples of 3 and 5
*
* Return: Always sucess
*/
int main(void)
{
int i, s = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
s += i;
}
i++;
}
return (0);
}
