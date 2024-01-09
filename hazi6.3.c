#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){

    char alap[8];
    char kettes[2];
    printf("Adja meg beolvasando 8 hosszusagu szoveget!\n");
    scanf("%s", alap);
	srand(time(0));
    for(int j=0;j<20;j++)
    {
        for (int i = 0; i < 2; i++)
            {
                int num = (rand() %(122- 97 + 1)) + 97;
                kettes[i] = num;
            }
        for (int i = 2; i < 12; i++)
            {
                kettes[i] = "";
            }
        if(strstr(alap, kettes)!=0)
        {
            printf("%s", kettes);
        }
    }
}
