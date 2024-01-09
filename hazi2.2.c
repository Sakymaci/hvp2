#include <stdio.h>

int main()
{
    int a=0, eredmeny=0;
    printf("kerek egy szamot:");
    scanf("%d", &a);
    while(a<50)
    {
        if(a%2==0)
        {
        eredmeny=eredmeny+a;
        }
        a++;
    }
    printf("szam:%d", eredmeny);
}
