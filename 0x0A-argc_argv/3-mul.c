#include "main.h"
#include <stdio.h>
/**
* main - function that multipliate 2 numberd
* @argc: argument count
* @argv: argument variablr
* Return: 0
*/
int main(int argc, char *argv[])
{
int n = 0, m = 0;
if (argc == 3)
{
n1 = atoi(argv[1]);
m = atoi(argv[2]);
printf('%d/n', n1 *m);
}
else
{
printf("Error/n");
return (1);
}
return (0);
}
