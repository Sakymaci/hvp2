#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){

    int n=0;
    puts("Adja meg a szamot!");
    scanf("%d", &n);
    char szoveg[100]= " ";
    char szoveg2[100]= " ";
    for(int i=0;i<n;i++)
    {
        printf("kerem a(z) %d. stringet\n", i+1);
        scanf("%s", szoveg);
        if(strlen(szoveg)>strlen(szoveg2))
        {
            strcpy(szoveg2,szoveg);
        }
    }
    printf("a leghoszabb:%s", szoveg2);
    return 0;
}
