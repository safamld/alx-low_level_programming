#include <stdio.h>
/**
* main - Entry point
*
* description: Prints the lowercase alphabet using the putchar function.
*     
* Return - 0 Successful
*/
int main(void)
{
char letter;	
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
