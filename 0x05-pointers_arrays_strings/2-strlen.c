#include <stdio.h>
#include "main.h"
/**
* _strlen - function of lenght
*
* @s: variab
*
* Return: lenght of strings
*/
int _strlen(char *s)
{
int length = 0;
while (*s++)
{
length++;
}
return (length);
}
