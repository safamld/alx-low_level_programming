#include "main.h"
/**
* _strpbrk - function search string
* @s: string searched
* @accept: the set og bytes to be searched
* Return: pointer to the byte
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
