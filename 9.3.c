#include <stdio.h>
#include <string.h>

struct Verzio {
    int foverz;
    int alverz;
    int inkverz;
};

typedef struct Verzio verzio;
typedef unsigned char byte;

void printVerzio( struct Verzio verzio){
    printf("A program foverzioja: %d\n", verzio.foverz);
    printf("A program alverzioja %d\n", verzio.alverz);
    printf("A program inkrementalis verzioja %d\n", verzio.inkverz);
}
void hasonlit( struct Verzio verzio1,  struct Verzio verzio2)
{
    if(verzio1.foverz>verzio2.foverz)
    {
        printVerzio(verzio1);
    }
    else if(verzio1.foverz<verzio2.foverz)
    {
        printVerzio(verzio2);
    }
    else
    {
        if(verzio1.alverz>verzio2.alverz)
        {
            printVerzio(verzio1);
        }
        else if(verzio1.alverz<verzio2.alverz)
        {
            printVerzio(verzio2);
        }
        else
        {
            if(verzio1.inkverz>verzio2.inkverz)
            {
                printVerzio(verzio1);
            }
            else if(verzio1.inkverz<verzio2.inkverz)
            {
                printVerzio(verzio2);
            }
            else
            {
                printf("egyenloek");
            }
        }
    }

}

int main()
{
    struct Verzio verzio1;
    struct Verzio verzio2;

    verzio1.foverz = 1;
    verzio1.alverz = 9;
    verzio1.inkverz = 198;

    printVerzio(verzio1);


    verzio2.foverz = 15;
    verzio2.alverz = 23;
    verzio2.inkverz = 1;
    printVerzio(verzio2);
    printf("\n\na nagyobb verzio szam:\n\n");
    hasonlit(verzio1,verzio2);
    return 0;
}
