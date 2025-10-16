#include<stdio.h>

int main()
{
    int b[4][4];
    int pivot[4] = {0,0,0,0};
    printf("enter a 4x4 row echelon matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(b[i][j] != 0)
            {
                pivot[j] = 1;
                break;
            }
        }
        
    }
    int n = 1;
    for(int i = 0;i <4;i++)
    {
        if(pivot[i])
        {
            printf("basis %d:( ",n);
            for (int j = 0;j < 4;j++)
            {
                printf("%d ",b[j][i]);
            }
            printf(")\n");
            n++;
        }
        
    }

    return 0;
}