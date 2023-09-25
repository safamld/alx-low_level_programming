#include "main.h"
/**
* _strspn - function gets the lenght of prefix
* @s: segment
* @accept: input
* Return: sucess
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int v = 0;
int i;
while (*s)
{

for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
v++;
break;
}
else if (accept[i + 1] == '\0')
return (v);
}
s++;
}
return (v);
}
