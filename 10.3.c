#include <stdio.h>
#include <string.h>

struct Verzio {
    int foverz;
    int alverz;
    int inkverz;
};

int cmpfunc(const void * a, const void * b)
{
    return(*(int*)b - *(int*)a);
}

typedef struct Verzio verzio;
typedef unsigned char byte;

void printVerzio( struct Verzio verzio[10]){
    for (int i=0;i<10;i++)
    {
    printf("A %d. program foverzioja: %d\n",i, verzio[i].foverz);
    printf("A %d. program alverzioja %d\n",i, verzio[i].alverz);
    printf("A %d. program inkrementalis verzioja %d\n",i, verzio[i].inkverz);
    }
}
int main()
{
    int x=0;
    struct Verzio verzio1[10];

    verzio1[0].foverz = 10120;
    verzio1[0].alverz = 2351;
    verzio1[0].inkverz = 2131;
    verzio1[1].foverz = 2359;
    verzio1[1].alverz = 4122;
    verzio1[1].inkverz = 2342;
    verzio1[2].foverz = 4238;
    verzio1[2].alverz = 233;
    verzio1[2].inkverz = 323423;
    verzio1[3].foverz = 2342347;
    verzio1[3].alverz = 3243244;
    verzio1[3].inkverz = 234324;
    verzio1[4].foverz = 42346;
    verzio1[4].alverz = 23425;
    verzio1[4].inkverz = 3245;
    verzio1[5].foverz = 3245;
    verzio1[5].alverz = 43243246;
    verzio1[5].inkverz = 346;
    verzio1[6].foverz = 4324;
    verzio1[6].alverz = 734;
    verzio1[6].inkverz = 234237;
    verzio1[7].foverz = 3243;
    verzio1[7].alverz = 22348;
    verzio1[7].inkverz = 2338;
    verzio1[8].foverz = 32;
    verzio1[8].alverz = 4329;
    verzio1[8].inkverz = 39;
    verzio1[9].foverz = 31;
    verzio1[9].alverz = 10;
    verzio1[9].inkverz = 10;


    qsort(verzio1, 10, sizeof(int), cmpfunc);
    printVerzio(verzio1);
    return 0;
}
