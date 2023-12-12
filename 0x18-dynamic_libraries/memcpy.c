#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n) {
char *originalDest = dest; // Save the original destination pointer
// Copy n bytes from source to destination
while (n > 0) {
*dest = *src;
dest++;
src++;
n--;
}
return originalDest; // Return the original destination pointer
}
