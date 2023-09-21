#include "main.h"
#include <string.h>
/**
* *_strncat - function that prints 2 strings
* @dest : string
* @src: string
* @n:number of bytes needed from src
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int l = 0;
while (src[i] != '\0' && i < n)
{
i++;
l++;
}
strncat(dest, src, l);
return (dest);
}
