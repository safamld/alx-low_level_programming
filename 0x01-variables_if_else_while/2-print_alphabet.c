#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the lowercase alphabet using the putchar function.
*     
* Return : Always Success
*/
int main(void)
{
char letter;	
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;}
}
putchar('\n');
return (0);
}
