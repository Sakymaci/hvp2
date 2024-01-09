#include <stdio.h>

int main ()
{
    int b= 0, eredmeny=0;
    for(int i=1; b<50; i=i+2)
    {
        eredmeny=eredmeny+i;
        b++;
    }
    printf("az eredmeny=%d", eredmeny);
}
