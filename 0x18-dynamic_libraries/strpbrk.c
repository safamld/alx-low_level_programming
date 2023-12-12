#include "main.h"
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0') {
if (*s == *a) {
return s;  // Return a pointer to the first matching character
}
a++;
}
s++;
}
return NULL;  // Return NULL if no match is found
}
