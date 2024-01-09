#include <stdio.h>

int main()
{
    int magassag,szelesseg;
    printf("magassag: ");
    scanf("%d", &magassag);
    printf("szelesseg: ");
    scanf("%d", &szelesseg);
    for(int i=0;i<magassag;++i)
    {
        for(int j=0;j<szelesseg;++j)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
