#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b)
{
    return(*(int*)a - *(int*)b);
}

int main()
  {
    int x=0;
    FILE *fptr1, *fptr2;
    char fname[20];
    int tomb[10];
    char temp[] = "temp.txt";
    printf("Adja meg a beolvasando file nevet!\n");
    scanf("%s",fname);
    fptr1 = fopen(fname, "r");
    if (!fptr1)
    {
        printf("Hiba a file megnyitasa kozben!\n");
        return 0;
    }
    fptr2 = fopen(temp, "w");
    if (!fptr2)
    {
        printf("Hiba a file megnyitasa kozben!\n");
        return 0;
    }
    while (!feof(fptr1))
    {
       for (int i = 0; i < 10; i++)
        {
            fscanf(fptr1, "%d,", &tomb[i]);
        }
        for(int i=0;i<10;i++)
        {
            qsort(tomb, 10, sizeof(int), cmpfunc);
        }
        for (int i = 0; i < 10; i++)
        {
            fprintf(fptr2, "%d,", tomb[i]);
        }
          for (int i = 0; i < 10; i++)
        {
            printf("%d,", tomb[i]);
        }
            printf("\n");
        fprintf(fptr2, "\n");
    }
    fclose(fptr1);
    fclose(fptr2);
    remove(fname);
    rename(temp, fname);
    return 0;
  }
