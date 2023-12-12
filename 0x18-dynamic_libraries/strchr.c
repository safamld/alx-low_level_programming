#include "main.h"
char *_strchr(char *s, char c) {
while (*s != '\0') {
if (*s == c) {
return s; // Return the pointer to the first occurrence of the character
}
s++;
}
// If the character is not found, return NULL
return NULL;
}
