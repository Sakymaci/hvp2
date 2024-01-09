#include <stdio.h>
#include <stdlib.h>

int main()
  {
    int n;
    int count = 0;
    char ch;
    FILE *fptr1, *fptr2;
    char fname[20] = "vers.txt";
    char buff[100];
    char temp[] = "temp.txt";
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
        count=0;
        strcpy(buff, "\0");
        fgets(buff, 100, fptr1);
        for(int i=0;i<sizeof buff;i++)
        {
            if(buff[i]=='a'||buff[i]=='e'||buff[i]=='i'||buff[i]=='o'||buff[i]=='u')
            {
                count++;
            }
        }
        fprintf(fptr2,"%d", count-7);
        fprintf(fptr2, "\n");
    }
    fclose(fptr1);
    fclose(fptr2);
    rename(temp, "vers2.txt");
    return 0;
  }
