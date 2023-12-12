#include "main.h"
char *_strncat(char *dest, char *src, int n) {
char *originalDest = dest; // Save the original destination pointer
// Move the destination pointer to the end of the destination string
while (*dest != '\0') {
dest++;
}
// Copy up to the first n characters from source to the end of destination
while (*src != '\0' && n > 0) {
*dest = *src;
dest++;
src++;
n--;
}
// Null-terminate the concatenated string
*dest = '\0';
return originalDest; // Return the original destination pointer
}
