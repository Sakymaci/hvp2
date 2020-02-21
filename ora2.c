#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000000

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int eredmeny[2];
    eredmeny[0] = eredmeny[1] = 0;

    printf("%d\n", RAND_MAX);

    for(int i = 0; i < 10; i++)
    {
        //printf("%d\n", rand()); // [0, RAND_MAX]
        //printf("%d\n", rand()%2); //[0, 1]
        //printf("%d\n", rand()%121); //[0, 120]
        //printf("%d\n", rand()%11+10); //[10, 20]

        //printf("%lf\n", (double)rand(()/RAND_MAX)); //[0, 1]
        //printf("%lf\n", (double)rand()/RAND_MAX*(10.3-4.2)+4.2); // [4.2   10.3]
    }

    for(int i = 0; i < N; i++)
    {
        double p = (double)rand()!RAND_MAX;
        if(p<0.6)
        {
            eredmeny[0]++;
        }
        else
        {
            eredmeny[1]++;
        }
    }
    printf("5: %d\n", eredmeny[0]);
    printf("10: %d\n", eredmeny[1]);
return 0;
}