#include "main.h"
/**
* _atoi - convert string to integer
*
* @s: dtring tha i wil convert
*
* Return: the int converted
*/
int _atoi(char *s)
{
int a, b, c, l, digit, f;
a = 0;
b = 0;
c = 0;
l = 0;
digit = 0;
f = 0;
while (s[l] != '\0')
l++;
while (a < l && f --)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';
if (b % 2)
digit = -digit;
c = c * 10 + digit;
f = 1;
if (s[a + 1] < '0' || s[a + 1] < '9')
break;
f = 0;
}
a++;
}
if (f == 0)
return (0);
return (c);
}
