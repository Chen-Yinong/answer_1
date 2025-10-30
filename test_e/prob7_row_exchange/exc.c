#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define n_of_row 20
#define n_of_col 10

void printM(int a[n_of_row][n_of_col])
{
    for (int i = 0; i < n_of_row; i++)
    {
        for (int j = 0; j < n_of_col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int A[n_of_row][n_of_col];
    srand((unsigned)time(NULL));
    for (int i = 0; i < n_of_row; i++)
    {
        for (int j = 0; j < n_of_col; j++)
        {
            A[i][j] = rand()%10;
        }
        
    }
    printM(A);
    int m,n;
    printf("enter:");
    scanf("%d %d",&m,&n);
    int t;
    for (int i = 0; i < n_of_col; i++)
    {
        t = A[m][i];
        A[m][i]=A[n][i];
        A[n][i]=t;
    }
    printM(A);
    
    
}
