#include <stdio.h>
#include <stdlib.h>
#define hossz 8



void sort(int a[],int length)
{
    int i,j,key;
    for(j=length-2;j>=0;j--)
    {
        key=a[j];
        i=j+1;
        while((i<=length-1)&&(a[i]>key))
        {
            a[i-1]=a[i];
            i++;
        }
        a[i-1]=key;
        for(int i=0;i<6;i++)
      {
          printf("%d,", a[i]);
      }
      printf("\n");
    }
}
void main()
  {
      int tomb[6]={31,41,59,26,41,58};
      sort(tomb,6);
  }
