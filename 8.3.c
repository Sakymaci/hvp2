#include <stdio.h>
#include <stdlib.h>
#define hossz 8

int k=9;
int t1[hossz]={0,3,1,3,4,5,7,5};
int t2[hossz]={0,0,0,0,0,0,0,0};

void tombkiir(int T[],int e, int v)
{
    for(int i=e;i<=v;i++)
        printf("%d, ", T[i]);
    printf("\n");
}
void main()
  {
    int t3[k+1];
    for(int i=0;i<k+1;i++)
        t3[i]=0;
    for(int i=0;i<hossz;i++)
        t3[t1[i]]=t3[t1[i]]+1;
    for(int i=1;i<k+1;i++)
        t3[i]=t3[i]+t3[i-1];
    tombkiir(t2,0,hossz-1);
    tombkiir(t3,0,hossz-1);
    for(int i=hossz-1;i>=0;i--)
    {
        t2[t3[t1[i]]-1]=t1[i];
        t3[t1[i]]=t3[t1[i]]-1;
    }
    tombkiir(t2,0,hossz-1);
    tombkiir(t3,0,hossz-1);
    return 0;
  }
