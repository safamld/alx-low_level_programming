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
int moit;
int i = 0;
char x;
int l = 0;
for (i = 0; s[i] != '\0'; i++)
moit = i / 2;
while (moit--)
{
x  = s[i - l - 1];
s[i - l - 1] = s[i];
s[i] = x;
l++;
}
}
