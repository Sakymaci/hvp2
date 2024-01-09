#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    int numb=0;
    printf("hany hetet generaljon: ");
    scanf("%d", &numb);
    FILE *fptr;
    int array[20];
    fptr = fopen("lotto.txt","w");
	srand(time(0));
	printf("%d", numb);
	int x=0, j =0;
    while (j<5) //valamiért ide ha behelyettesitem a numb-ot "ahány hetet kéne", teljesen random számnyit generál le, hiába a numb az annyi amennyit a felhasznalo beirt
    {
        for(int i =0;i<20;i++)
        {
                int num = rand() %99;
                array[i] = num;
        }
        for(int i=0;i<20;i++)
        {
            for(int u=0;u<20;u++)
            {
                if(array[u]>array[u+1])
                {
                    x = array[u];
                    array[u]=array[u+1];
                    array[u+1]=x;
                }
            }
        }
        for(int i=0;i<20;i++)
            fprintf(fptr, "%d ", array[i]);
        fprintf(fptr, "\n");
        j++;
    }
    fclose(fptr);
    printf("A file letrehozasa sikeresen megtortent!\n");


    return 0;
}
