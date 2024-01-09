#include <stdio.h>
#include <stdlib.h>

int main()
  {
    int n;
    int count = 97;
    char ch;
    FILE *fptr1, *fptr2;
    char fname[20];
    char buff[25];
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
        strcpy(buff, "\0");
        fgets(buff, 25, fptr1);
        for(int i=0;i<sizeof buff;i++)
        {
            buff[i] = count;
            count++;
            if (count==123)
            {
                count=97;
            }
            fputc(count, fptr2);
        }
        fprintf(fptr2, "\n");
    }
    fclose(fptr1);
    fclose(fptr2);
    remove(fname);
    rename(temp, fname);
    return 0;
  }
