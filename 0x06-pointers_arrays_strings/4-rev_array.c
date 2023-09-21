#include "main.h"
/**
* reverse_array - function that reverse the the conten of an array
* @a: an array of integer
* @n: the number of elements
*/
void reverse_array(int *a, int n)
{
int j = 0;
int tmp = 0;
for (j = n - 1; j >= n / 2; j--)
{
tmp = a[n - 1 - j];
a[n - 1 - j] = a[j];
a[j] = tmp;
}
}
