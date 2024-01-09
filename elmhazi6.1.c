#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tombkiir(int n, int m, int tomb[n][m])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d	", tomb[i][j]);
		}
		printf("  atlag:%d", (tomb[i][0]+tomb[i][1]+tomb[i][2]+tomb[i][3]+tomb[i][4])/5);
	puts(" ");
	}
	puts(" ");
}

int main()
{
	int tomb[10][5];
	int tomb2[90];
	int max=0;
	for(int i=0;i<90;i++)
    {
        tomb2[i]=0;
    }
	srand(time(0));
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<5;j++)
		{
			tomb[i][j]=rand()%90+1;
            tomb2[tomb[i][j]]=tomb2[tomb[i][j]]+1;
            if (tomb[i][0]==tomb[i][1]||tomb[i][0]==tomb[i][2]||tomb[i][0]==tomb[i][3]||tomb[i][0]==tomb[i][4])
            tomb[i][0]=tomb[i][0]+1;
            if (tomb[i][1]==tomb[i][2]||tomb[i][1]==tomb[i][3]||tomb[i][1]==tomb[i][4])
            tomb[i][1]=tomb[i][1]+1;
            if (tomb[i][2]==tomb[i][3]||tomb[i][2]==tomb[i][4])
            tomb[i][2]=tomb[i][2]+1;
            if (tomb[i][3]==tomb[i][4])
            tomb[i][3]=tomb[i][3]+1;
		}
	}
	tombkiir(10,5,tomb);
    int count=0;
	for(int i=0;i<90;i++)
    {
        if (max<tomb2[i])
            max=tomb2[i];
    }
    while (count<5)
    {
        for(int i=0;i<90;i++)
        {
            if(tomb2[i]==max)
            {
                printf("%d ", i);
                count++;
            }
            if (count==5)
                break;
        }
        for(int i=0;i<90;i++)
        {
            if(tomb2[i]==max-1)
            {
                printf("%d ", i);
                count++;
            }
            if (count==5)
                break;
        }
    }
	return 0;
}
