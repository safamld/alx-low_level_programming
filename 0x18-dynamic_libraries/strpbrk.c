#include "main.h"
char *_strpbrk(char *s, char *accept) {
while (*s != '\0') {
if (strchr(accept, *s) != NULL) {
return s; // Return the pointer to the first occurrence of any character from accept
}
s++;
}
