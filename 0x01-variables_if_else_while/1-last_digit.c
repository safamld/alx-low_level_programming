#include	<stdlib.h> 
#include	<time.h>
#include	<stdio.h> 
/**
 * main - fonction de lzst degit 
 * 
 * *Return:0 
 */ 
int main(void) 
{ 
int n;    
srand(time(0)); 
n = rand() - RAND_MAX / 2; 
/* your code goes there */
int last_digit	=	n	%	10;
if (last_digit>5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (last_digit=0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else if (last_digit < 5 && last_digit !=0  )
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
return (0); 
}
