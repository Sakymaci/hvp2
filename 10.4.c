#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Nile {
    int year;
    float flood;
};

int cmpfunc(const void * a, const void * b)
{
    struct Nile *ia = (struct Nile *)a;
    struct Nile *ib = (struct Nile *)b;
    return (100.f*ia->flood - 100.f*ib->flood);
}


typedef struct Nile nile;
typedef unsigned char byte;

int main(){

    FILE *fptr;
    char fname[20];
    struct Nile nile[1000];
    char* token;
    char* delim = ",";

    printf("Adja meg a beolvasando file nevet!\n");
    scanf("%s", fname);
    fptr = fopen( fname, "r");
    if( fptr == NULL)
    {
        printf("Hiba a file megnyitasa kozben!\n");
        exit(0);
    }

    char buff[255];
    int i=0;
    while ( fgets(buff, 255, fptr) != NULL )
    {
        token = strtok( buff, delim);
        if( token != NULL)
            nile[i].year= atoi(token);

        token = strtok( NULL, delim);
        if( token != NULL)
            nile[i].flood =atof(token);

        printf("sor: %d, %f\n", nile[i].year, nile[i].flood);
        i++;
    }

    qsort(nile, i, sizeof(struct Nile), cmpfunc);
    for(int b=0;b<i;b++)
    {
        printf("sor: %d, %f\n", nile[b].year, nile[b].flood);
    }
    fclose(fptr);

    return 0;
}
