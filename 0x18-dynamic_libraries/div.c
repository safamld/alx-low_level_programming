#include "main.h"
int div(int a, int b)
{
if (b == 0)
{
fprintf(stderr, "Error: Division by zero\n");
return (0);
}
return (a / b);
}
