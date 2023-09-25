#include "main.h"
#include <stdio.h>
/**
* _strchr - locates caracter in string
* @c: the caracter
* @s: the string
* Return: Null
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
