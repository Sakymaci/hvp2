#include <stdio.h>

int kerulet(int a, int b)
{
    return (a+b)*2;
}
int terulet(int a, int b)
{
    return a*b;
}
void rajz(int a, int b)
{
    for(int j=0;j<b;j++)
    {
        if(j==0)
        {
            for(int i=0;i<a;i++)
            {
                printf("#");
            }
        }
        else if(j==b-1)
        {
            for(int i=0;i<a;i++)
            {
                printf("#");
            }
        }
        else
        {
            for(int z=0;z<a;z++)
            {
                if(z==0)
                {
                    printf("#");
                }
                else if(z==a-1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
void atlo(int a, int b)
{
    for(int j=1;j<b+1;j++)
    {
        for(int i=1;i<a+1;i++)
        {
            if(i==j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void felezo(int a, int b)
{
    for(int j=0;j<b;j++)
    {
        for(int i=0;i<a;i++)
        {
            if(i==a/2)
            {
            printf("#");
            }
            else if(j==b/2)
            {
            printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}


int main()
{
    int a,b;
    printf("a oldal hossza: ");
    scanf("%d", &a);
    printf("b oldal hossza: ");
    scanf("%d", &b);
    printf("kerulet:%d\n", kerulet(a,b));
    printf("terulet:%d\n", terulet(a,b));
    rajz(a,b);
    atlo(a,b);
    felezo(a,b);
}
