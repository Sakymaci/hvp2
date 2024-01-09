#include <stdio.h>
#include <stdlib.h>

int main()
  {
    int n;
    int count = 0;
    char ch;
    FILE *fptr1, *fptr2;
    char fname[20];
    char buff[255];
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
    printf("eltavolitando sor: ");
    scanf("%d", &n);
    n++;
    while (!feof(fptr1))
    {
    strcpy(buff, "\0");
    fgets(buff, 255, fptr1);
        if (!feof(fptr1))
        {
            count++;
            if (count != n)
            {
                fprintf(fptr2, "%s", buff);
            }
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    remove(fname);
    rename(temp, fname);
    return 0;
  }
