#include <stdio.h>

void hello(int n)
{
    for(int i=0;i<n;++i)
    {
        printf("hello\n");
        printf("------------\n");
    }
}
int main()
{
    hello(2);
    hello(4);
    return 0;
}
