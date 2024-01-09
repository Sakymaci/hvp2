#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Cats{
    char nem;
    float suly;
    float sziv;
};


typedef struct Cats cats;
typedef unsigned char byte;

int main(){

    FILE *fptr;
    char fname[20]="cats.csv";
    struct Cats cats[200];
    char* token;
    char* delim = ",";
    fptr = fopen( fname, "r");
    if( fptr == NULL)
    {
        printf("Hiba a file megnyitasa kozben!\n");
        exit(0);
    }

    int meret=0;
    char buff[255];
    int i=0;
    while ( fgets(buff, 255, fptr) != NULL )
    {
        meret++;
        token = strtok( buff, delim);
        token = strtok( buff, delim);
        if( token != NULL)
            cats[i].nem= token;

        token = strtok( buff, delim);
        if( token != NULL)
            cats[i].suly= atof(token);

        token = strtok( NULL, delim);
        if( token != NULL)
            cats[i].sziv =atof(token);
        i++;
    }
    int index=0;
        int atlag=0, atlag2=0;
    for(int b=0; b<meret;b++)
    {
        if(cats[b].nem=='F')
            atlag=atlag+cats[b].sziv;
        if(cats[b].nem=='M')
            atlag2=atlag2+cats[b].sziv;
        if(cats[i].suly<cats[i+1].suly)
            index=i+1;
    }
    printf("az atlagos nosteny szivsuly:%d\n", atlag/meret);
    printf("az atlagos him szivsuly:%d\n", atlag2/meret);
    printf("alegkonyebb macska:%c, %f, %f\n", cats[index].nem, cats[index].suly, cats[index].sziv);


    return 0;
}
