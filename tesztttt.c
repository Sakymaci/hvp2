#include <stdio.h>
int valami(int *n)
{
 *n *=3;
}
int main ()
{
int a =4;
valami(&a);
printf("%d",a);
return 0;
 }
