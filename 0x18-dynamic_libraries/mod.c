#include "main.h"
int mod(int a, int b)
{
if (b == 0)
{
fprintf(stderr, "Error: Modulo by zero\n");
return (0);
}
return (a % b);
}
