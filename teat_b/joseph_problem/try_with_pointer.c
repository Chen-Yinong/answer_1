#include<stdio.h>
#include<stdlib.h>

int Jose(const int n,const int m, int k)
{
    if (n == 1)
    {
        return 1;
    }
    
    if (k == 1)
    {
        if (m > 1)
        {
            return m-1;
        }
        else
        {
            return n;
        }
    }
    
    int *queue = (int *)malloc((n+1) * sizeof(int));
    for (int i = 0; i < n+1; i++)
    {
        queue[i] = 1;
    }
    int count = 1,who_is_counting = m;
    printf("%d报%d\n",who_is_counting,count);
    for (int leftover = n;leftover > 1;)
    {
        if (queue[who_is_counting] == 1)
        {
            who_is_counting++;
            if (who_is_counting > n)
            {
                who_is_counting = 1;
            }
            if (queue[who_is_counting] == 0)
            {
                while (queue[who_is_counting] == 0)
                {
                    who_is_counting++;
                    if (who_is_counting > n)
                    {
                         who_is_counting = 1;
                    }
                }
                
            }
            count ++;
            if (count == k)
            {
                queue[who_is_counting] = 0;
                leftover--;
                printf("%d报%d并出局\n",who_is_counting,count);
                count = 1;
                who_is_counting++;
                if (who_is_counting > n)
                {
                    who_is_counting = 1;
                }
                if (queue[who_is_counting] == 0)
                {
                    while (queue[who_is_counting] == 0)
                    {
                        who_is_counting++;
                            if (who_is_counting > n)
                        {
                             who_is_counting = 1;
                        }
                    }
                
                }
            }
            printf("%d报%d\n",who_is_counting,count);
        }
        if (queue[who_is_counting] == 0)
        {
            if (queue[who_is_counting] == 0)
            {
                while (queue[who_is_counting] == 0)
                {
                    who_is_counting++;
                    if (who_is_counting > n)
                    {
                         who_is_counting = 1;
                    }
                }
                
            }
        }
        
        
        
    }

    for (int i = 1; i < n+1; i++)
    {
        if (queue[i] == 1)
        {
            free(queue);
            return i ;
        }
        
    }
    
    free(queue);
    return 0;
}

int main()
{
    printf("enter n , m and k :");
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    printf("the luckiest person is No.%d\n",Jose(n,m,k));
}