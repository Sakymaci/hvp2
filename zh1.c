#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    char csere;
    char nevek[5][20];
    for(int i=0;i<5;i++)
    {
        printf("Adja meg a(z) %d. nevet!\n", i+1);
        scanf("%s", nevek[i]);
    }
    for(int i=0;i<5;i++)
    {
        int j=0;
        while (nevek[i][j]!=NULL)
        {
            nevek[i][j]=nevek[i][j]-32;
            j++;
        }
    }
    for(int k=0;k<10;k++)
    {
    for(int i=0;i<5;i++)
    {
        int j=0;
        while (nevek[i][j]!=NULL)
        {
            if(nevek[i][j]>nevek[i][j+1]&&nevek[i][j+1]!=NULL)
            {
                csere=nevek[i][j+1];
                nevek[i][j+1]=nevek[i][j];
                nevek[i][j]=csere;
            }
            j++;
        }
    }
    }
     for(int i=0;i<5;i++)
    {
        printf("A rendezett nevek:%s\n", nevek[i]);
    }
}
