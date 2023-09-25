#include "main.h"
/**
* _memset - function that files memory with constantant bytes
* @s:adrrss of memomry to be filed
* @b: desired value
* @n: how much bytes will be changes
* Return: new value of bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
