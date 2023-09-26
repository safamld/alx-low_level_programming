#include "main.h"
#include "stdio.h"
/**
* print_diagsums - the sum of 2sqrmatrix
* @a: matrix
* @size: size of matrix
* Return: nothing
*/
void print_diagsums(int *a, int size)
{
int i, s = 0, count = 0;
for (i = 0; i < size; i++)
{
s += a[i];
a += size;
}
a -= size;
for (i = 0; i < size; i++)
{
count += a[i];
a -= size;
}
printf("%d, %d\n", s, count);
}
