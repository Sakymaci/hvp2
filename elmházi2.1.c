#include <stdio.h>

int main()
{
    int x,y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    if (x<y)
    {
        printf("x kisebb mint y\n");
    }
    else if (x>y)
    {
        printf("y kisebb mint x\n");
    }
    else
    {
        printf("x egyenlo y-al\n");
    }
    return 0;
}
