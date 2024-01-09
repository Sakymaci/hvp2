#include <stdio.h>

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);
    int tomb[n];
    int atlag = 0, max, palindrom=1;
    for(int i=0;i<n;i++)
    {
        tomb[i] = i;
        atlag = atlag + tomb[i];
    }
    atlag = atlag /n;
    printf("atlag:%d\n", atlag);
    max = tomb[0];
    for(int i=0;i<n;i++)
    {
        if (tomb[i]> max)
        {
            max = tomb[i];
        }
    }
    printf("max elem:%d\n", max);
    for(int i=0;i<n/2;i++)
    {
        if(tomb[i]!=tomb[n-i-1])
        {
            palindrom=0;
        }
    }
    if(palindrom==0)
    {
        printf("a tomb nem palindrom");
    }
    if(palindrom==1)
    {
        printf("a tomb palindrom");
    }
    return 0;
}
