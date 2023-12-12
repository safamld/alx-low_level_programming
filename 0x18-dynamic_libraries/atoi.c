#include "main.h"
int _atoi(char *s) {
int result = 0;
int sign = 1;
// Check for sign
if (*s == '-') {
sign = -1;
s++;
}
// Convert characters to integer
while (*s >= '0' && *s <= '9') {
result = result * 10 + (*s - '0');
s++;
}
// Apply sign
return result * sign;
}
