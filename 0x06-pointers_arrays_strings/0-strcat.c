#include "main.h"
#include <string.h>
/*
* *_strcat - function that concatenate 2 string
* @src: string
* @dest: string
* Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
int l, i;
i = 0;
l = 0;
while (src[i] != '\0')
{
l++;
i++;
}
strncat(dest, src, l);
return (dest);
}
