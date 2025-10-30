#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 4 //矩阵的规模

void printMatrix(double a[N][N])//输出矩阵
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%.2f ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void toEchelon(double a[N][N])//行化简
{
    for (int k = 0; k < N; k++)//保证主元位置不是0
    {
        if (a[k][k] ==0)
        {
            for (int i = k+1;i < N; i++)
            {
                if (a[i][k] != 0)
                {
                    for (int j = 0; j < N; j++)
                    {
                        double t = a[k][j];
                        a[k][j] = a[i][j];
                        a[i][j] = t;
                    }
                    break;
                }
                
            }
            
        }
        if (a[k][k] != 0)//其实不太懂
        {
            for (int i = k+1; i < N; i++)
            {
                double factor = a[i][k]/a[k][k];
                for (int j = 0; j < N; j++)
                {
                    a[i][j] -= factor*a[k][j];
                }
                
            }
            
        }
        
    }
    
}

int main()
{
    double B[N][N];
    srand((unsigned)time(NULL));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            B[i][j] = rand() % 4;
        }
        
    }
    printf("the origin matrix:\n");
    printMatrix(B);

    toEchelon(B);

    printf("echelon form:\n");
    
    printMatrix(B);

    return 0 ;
}