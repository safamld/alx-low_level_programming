#include "main.h"
#include <stdio.h>
/**
* _sqrt_recursion - function returns natural square root of a number
* @n: number
* Return: sqrt
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
* _sqrt - function sqrt
* @n: number
* @i: integer
* Return: nothing
*/
int _sqrt(int n, int i)
{
return (_sqrt(n, 1));
}
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}
