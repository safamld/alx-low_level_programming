#include "main.h"
char *custom_strncpy(char *dest, const char *src, size_t n)
{
char *originalDest = dest;
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (originalDest);
}
