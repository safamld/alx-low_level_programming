#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
*main - random
*
*Description:assign a random number to the variable n each time it is exec
*
*Return:sucess or error
*
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
