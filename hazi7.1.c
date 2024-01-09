#include <stdio.h>
#include <string.h>

struct Szemely {
    char nev[50];
    int magassag;
    int testsuly;
    int szuletesEve;
    char nem[10];
};

typedef struct Szemely szemely;
typedef unsigned char byte;

void printSzemely( struct Szemely szemely){
    printf("A szemely neve: %s\n", szemely.nev);
    printf("A szemely magassaga %d\n", szemely.magassag);
    printf("A szemely testsulya %d\n", szemely.testsuly);
    printf("A szemely szuletesi eve %d\n", szemely.szuletesEve);
    printf("A szemely neme %s\n", szemely.nem);
}

void printSzemelyPointer( struct Szemely *szemely){
    printf("A szemely neve: %s\n", szemely->nev);
    printf("A szemely magassaga %d\n", szemely->magassag);
    printf("A szemely testsulya %d\n", szemely->testsuly);
    printf("A szemely szuletesi eve %d\n", szemely->szuletesEve);
}

void idosebb(){
    struct Szemely szemely, szemely2;
    printf("szemely neve:");
    scanf("%s", &szemely.nev);
    printf("szemely magassaga:");
    scanf("%d", &szemely.magassag);
    printf("szemely testsulya:");
    scanf("%d", &szemely.testsuly);
    printf("szemely szuletesi eve:");
    scanf("%d", &szemely.szuletesEve);
    printf("szemely szuletesi neme:");
    scanf("%s", &szemely.nem);
    printf("szemely neve:");
    scanf("%s", &szemely2.nev);
    printf("szemely magassaga:");
    scanf("%d", &szemely2.magassag);
    printf("szemely testsulya:");
    scanf("%d", &szemely2.testsuly);
    printf("szemely szuletesi eve:");
    scanf("%d", &szemely2.szuletesEve);
    printf("szemely szuletesi neme:");
    scanf("%s", &szemely2.nem);
        printf("az idosebb:\n ");
    if(szemely.szuletesEve>szemely2.szuletesEve)
    {
                printSzemely(szemely);
    }
    else
    {
        printSzemely(szemely2);

    }
    }
    void bmr(struct Szemely szemely){
        if(szemely.nem=="ferfi" || szemely.nem=="Ferfi")
        {
            printf("BMR:%f\n", (10*szemely.testsuly)+(6.25*szemely.magassag)-(5*(szemely.szuletesEve-2020))+5);
        }
        else
        {
            printf("BMR:%f\n", (10*szemely.testsuly)+(6.25*szemely.magassag)-(5*(szemely.szuletesEve-2020))-161 );
        }
    }


int main()
{
    float BMI=0;
    struct Szemely elek;



    printf("szemely neve:");
    scanf("%s", &elek.nev);
    printf("szemely magassaga:");
    scanf("%d", &elek.magassag);
    printf("szemely testsulya:");
    scanf("%d", &elek.testsuly);
    printf("szemely szuletesi eve:");
    scanf("%d", &elek.szuletesEve);
    printf("szemely neme:");
    scanf("%s", &elek.nem);

    bmr(elek);

    printf("BMI:%d\n", elek.testsuly/(elek.magassag/100*2));
    idosebb();
    return 0;
}
