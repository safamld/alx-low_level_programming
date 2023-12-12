#include "main.h"
void _puts(char *s) {
// Iterate through the string until the null terminator is encountered
while (*s != '\0') {
putchar(*s);
s++;
}
putchar('\n');
}
