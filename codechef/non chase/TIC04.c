#include<stdio.h>
#include<stdlib.h>

int * chessboard;
void printchessboard(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(chessboard[i]==j)
                printf("Q ");
            else
                printf("- ");
        printf("\n");
    }
}

int caniplace(int row,int col)
{
     int i;
     for(i=0;i<row;i++)
         if(chessboard[i]==col || abs(chessboard[i]-col)==abs(i-row))
            return 0;
    return 1;
}

void QueensPlace(int qno,int n)
{
    if(qno==n)
    {
        printchessboard(n);
        printf("\n");
        return;
    }
    int i;
    for(i=0;i<n;i++)
        if(caniplace(qno,i))
        {
            chessboard[qno]=i;
            QueensPlace(qno+1,n);
        }

}
int main() {
	int n;
	scanf("%d",&n);
	chessboard=(int*)malloc(n*sizeof(int));
	if(n==2 || n==3)
		printf("Not Possible");
	else
		QueensPlace(0,n);
	return 0;
}