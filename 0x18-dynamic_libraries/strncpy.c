#include "main.h"
#include <string.h>
char *custom_strncpy(char *dest, const char *src, size_t n) {
char *originalDest = dest; // Save the original destination pointer
// Copy up to n characters from source to destination
while (*src != '\0' && n > 0) {
*dest = *src;
dest++;
src++;
n--;
}
// Null-terminate the destination string
while (n > 0) {
*dest = '\0';
dest++;
n--;
}
return originalDest; // Return the original destination pointer
}
