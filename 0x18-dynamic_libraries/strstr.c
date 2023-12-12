#include "main.h"
char *_strstr(char *haystack, char *needle) {
while (*haystack != '\0') {
char *start = haystack; // Save the starting position in case we find a match
// Check if the substring needle matches the current portion of haystack
while (*needle != '\0' && *haystack == *needle) {
haystack++;
needle++;
}
// If needle is fully matched, return the starting position
if (*needle == '\0') {
return start;
}
// Reset the pointers for the next iteration
haystack = start + 1;
needle = originalNeedle;
}
// If no match is found, return NULL
return NULL;
}
