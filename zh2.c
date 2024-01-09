#include <stdio.h>
#include <string.h>
#include <windows.h>

int  meret;
int kiir(char tomb[100][100])
{
    int meret2;
    int boo=0;
    for(int i=0;i<meret-1;i++)
    {
        meret2=0;
        boo=0;
        for(int j=0;j<100;j++)
        {

            if(tomb[i][j]!=NULL)
                meret2++;
            else
                break;
        }
        for(int j=0;j<meret2;j++)
        {
            if(tomb[i][j]==tomb[i][meret2-j-1])
            {
                boo=1;
                break;
            }
        }
        if(boo==0)
        {
            printf("nem palindrom: %s\n", tomb[i]);
        }
    }
}


int main(){
    char csere;
    char nevek[100][100];
    for(int i=0;i<100;i++)
    {
        printf("Adja meg a(z) %d. nevet!\n", i+1);
        scanf("%s", nevek[i]);
        meret++;
        if(nevek[i][0]=='*')
            break;
    }
    kiir(nevek);
}
