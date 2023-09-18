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
for (i = 0; s[i] != '\n'; i++)
l++;
for (i = 0; i < (l / 2); i--)
{
x = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = x;
}
}
