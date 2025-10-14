#include<stdio.h>

int main()
{
    int count = 0;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (i != j && i != k && j != k )
                {
                    count++;
                    printf("%d%d%d\n",i,j,k);
                }
                
            }
            
        }
        
    }
    printf("一共有%d个符合条件的三位数",count);
    return 0 ;
}