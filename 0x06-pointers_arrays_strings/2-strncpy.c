#include "main.h"
/**
* _strncpy - function that copy string
* @src: the source string
* @dest: the buffer storing the string copy
* @n: number max of string copied from src
* Description: strcnqat copy string from src
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int l = 0;
while (src[i] != '\0')
{
i++;
l++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[i] = src[i];
}
for (i = l; i < n; i++)
dest[i] = '\0';
return (dest);
}
