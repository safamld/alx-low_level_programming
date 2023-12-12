#include "main.h"

char *_memset(char *s, char b, unsigned int n) {
char *originalS = s; // Save the original pointer
// Fill the block of memory with the specified value
while (n > 0) {
*s = b;
s++;
n--;
}
return originalS; // Return the original pointer
}
