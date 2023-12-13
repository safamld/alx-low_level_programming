#include "main.h"
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
const char *h = haystack;
const char *n = needle;
while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
{
return (char *h);
}
haystack = (char *h + 1);
}
return (NULL);
}
