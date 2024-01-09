#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    int a,b;
    printf("a oldal hossza: ");
    scanf("%d", &a);
    printf("b oldal hossza: ");
    scanf("%d", &b);
    FILE *fptr;

    fptr = fopen("haromszog.txt","w");
    if( fptr == NULL)
    {
        printf("Hiba a file megnyitasa kozben!\n");
        exit(1);
    }
    for(int j=0;j<b;j++)
    {
        if(j==0)
        {
            for(int i=0;i<a;i++)
            {
                fprintf(fptr, "#");
            }
        }
        else if(j==b-1)
        {
            for(int i=0;i<a;i++)
            {
                fprintf(fptr, "#");
            }
        }
        else
        {
            for(int z=0;z<a;z++)
            {
                if(z==0)
                {
                    fprintf(fptr, "#");
                }
                else if(z==a-1)
                {
                    fprintf(fptr, "#");
                }
                else
                {
                    fprintf(fptr, " ");
                }
            }
        }
        fprintf(fptr, "\n");
    }
    fprintf(fptr, "\n");
    for(int j=1;j<b+1;j++)
    {
        for(int i=1;i<a+1;i++)
        {
            if(i==j)
            {
                fprintf(fptr, "#");
            }
            else
            {
                fprintf(fptr, " ");
            }
        }
        fprintf(fptr, "\n");
    }
    fprintf(fptr, "\n");
    for(int j=0;j<b;j++)
    {
        for(int i=0;i<a;i++)
        {
            if(i==a/2)
            {
                fprintf(fptr, "#");
            }
            else if(j==b/2)
            {
                fprintf(fptr, "#");
            }
            else
            {
                fprintf(fptr, " ");
            }
        }
        fprintf(fptr, "\n");
    }
    fclose(fptr);
    printf("A file letrehozasa sikeresen megtortent!\n");


    return 0;
}
