#include<stdio.h>

void possibilities(int b,int m,int p)
{
    if(p < b & p < m)
    {
        printf("no shopping\n");
        return ;
    }
    else
    {
        printf("all possible consequenses(bread,milk):\n");
    }

    int l1 = p/b , l2 = p/m;

    for (int i = 0; i <= l1; i++)
    {
        for (int j = 0; j <= l2; j++)
        {
            if(i == 0 && j == 0)
            {
                continue;
            }
            if (i*b+j*m <= p)
            {
                printf("%d %d\n",i,j);
            }
            
        }
        
    }
    return;
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    possibilities(a,b,c);
}