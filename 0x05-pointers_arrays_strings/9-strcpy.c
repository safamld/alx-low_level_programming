#include "main.h"
/**
* *_strcpy - copy string pointed by src
*
* @src: char type string
* @dest: char type string
*
* Description: copy the string pointed to by src and to buffer named dest
*
* Return: the pointer to dedt
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
