#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){

    char szoveg[100];
    puts("Adja meg az elso beolvasando szoveget!");
    gets(szoveg);
    for(int i=1;i<strlen(szoveg)-1;i++)
    {
        szoveg[i]=szoveg[0]+i;
    }
    printf("%s", szoveg);
    return 0;
}
