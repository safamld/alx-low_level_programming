#include "main.h"
/**
* rev_string - function reverse string
*
* @s: string
*
* Return: string
*/
void rev_string(char *s)
{
int i = 0;
char x;
int l = 0;
while (s[i++])
l++;
for (i = l - 1; i >= l / 2; i--)
{
x = s[i];
s[i] = s[i - l - 1];
s[i - l - 1] = x;
}
}
