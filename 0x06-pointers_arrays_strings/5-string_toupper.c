#include "main.h"
/**
* string_toupper - change the lowercase to upercase
* @str: the string checked
* Return: string
*/
char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
return (str);
}
