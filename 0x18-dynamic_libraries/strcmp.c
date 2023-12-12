#include "main.h"
int _strcmp(char *s1, char *s2) {
// Compare characters until a difference is found or both strings end
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
s1++;
s2++;
}
// Return the difference of the first differing characters
return (*s1 - *s2);
}
