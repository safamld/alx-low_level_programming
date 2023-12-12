#include "main.h"
char *_strcat(char *dest, char *src) {
char *originalDest = dest; // Save the original destination pointer
// Move the destination pointer to the end of the destination string
while (*dest != '\0') {
dest++;
}
// Copy characters from source to the end of destination
while (*src != '\0') {
*dest = *src;
dest++;
src++;
}
// Null-terminate the concatenated string
*dest = '\0';
return originalDest; // Return the original destination pointer
}
