#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tombkiir(int n, int m, int tomb[n][m])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d,", tomb[i][j]);
		}
	puts(" ");
	}
	puts(" ");
}

int cmpfunc(const void * a, const void * b)
{
    return(*(int*)a - *(int*)b);
}

int main()
{
    int n=0, x=0;
    printf("hany het: ");
    scanf("%d", &n);
	int tomb[n][20];
	int max=0;
	srand(time(0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<20;j++)
		{
			tomb[i][j]=rand()%90+1;
            if (tomb[i][0]==tomb[i][1]||tomb[i][0]==tomb[i][2]||tomb[i][0]==tomb[i][3]||tomb[i][0]==tomb[i][4])
            tomb[i][0]=tomb[i][0]+1;
            if (tomb[i][1]==tomb[i][2]||tomb[i][1]==tomb[i][3]||tomb[i][1]==tomb[i][4])
            tomb[i][1]=tomb[i][1]+1;
            if (tomb[i][2]==tomb[i][3]||tomb[i][2]==tomb[i][4])
            tomb[i][2]=tomb[i][2]+1;
            if (tomb[i][3]==tomb[i][4])
            tomb[i][3]=tomb[i][3]+1;
		}
		for(int u=0;u<20;u++)
            {
                qsort(tomb[i], 20, sizeof(int), cmpfunc);
            }
	}
	tombkiir(n,20,tomb);
	return 0;
}
