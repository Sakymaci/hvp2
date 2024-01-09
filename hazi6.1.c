#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){

    char szoveg2[10];
    puts("Adja meg az elso beolvasando szoveget!");
    gets(szoveg2);
    char szoveg[10];
    puts("Adja meg a masodik beolvasando szoveget!");
    gets(szoveg);
    int M = strlen(szoveg);
    int N = strlen(szoveg2);
    int res = 0;
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (szoveg2[i+j] != szoveg[j])
                break;
        if (j == M)
        {
           res++;
           j = 0;
        }
    }
    printf("%d", res);
}
