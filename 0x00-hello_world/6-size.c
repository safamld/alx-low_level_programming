#include <stdio.h>
/**
*main- print the size of type
*Return:sucess
*/
int main(void)
{
printf("Size of char : %lu byte(s)\n", sizeof(char));
printf("Size of int : %lu byte(s)\n", sizeof(int));
printf("Size of float : %lu byte(s)\n", sizeof(float));
printf("Size of long int : %lu byte(s)\n", sizeof(long int));
printf("Size of long long int : %lu byte(s)\n", sizeof(long long int));
return (0);
}
