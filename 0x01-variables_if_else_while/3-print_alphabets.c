#include <stdio.h>

/**
 * main - Enrty point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char c = 'a';
char C = 'A';

/prints a = z/
while (c <= 'z')
{
putchar(c);
c++;
}
/prints A = Z*/
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
