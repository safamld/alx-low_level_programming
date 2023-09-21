#include "main.h"
/**
* rot13 - function that encodes string
* @s: pointer to string
* Return: *s
*/
char *rot13(char *s)
{
int i, j;
char t1[] = "ABCDEFGHEJKLMNOPQRSTUVWxYZabcdefghijklmnopqrstuvwxyz";
char t2[] = "NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == t1[j])
{
s[i] = t2[j];
break;
}
}
}
return (s);
}
