#include<stdio.h>
#include<stdlib.h>
int if_prime(int a)
{
    for (int i = 2; i <= a/2; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

void prime_numbers(int *p1,int *p2,int *p3,int a)
{
    int n_of_prime = 0;
    for (int i = 1; i<=a; i++)
    {
        if (if_prime(i))
        {
            n_of_prime++;
        }
        
    }
    int *pri=(int*)malloc(n_of_prime*sizeof(int));
    int t1=0;
    for (int i = 1; i<=a; i++)
    {
        if (if_prime(i))
        {
            pri[t1] = i;
            t1++;
        }
        
    }
    for (int i = 0; i < n_of_prime; i++)
    {
        for (int j = 0; j < n_of_prime; j++)
        {
            for (int k = 0; k < n_of_prime; k++)
            {
                if (pri[i]+pri[j]+pri[k] == a)
                {
                    *p1 = pri[i];
                    *p2 = pri[j];
                    *p3 = pri[k];
                    return;
                }
                
            }
            
        }
        
    }
    
}

int main()
{
    int a = 0,b = 0,c = 0,x;
    printf("enter:");
    scanf("%d",&x);
    int *ap=&a,*bp=&b,*cp=&c;
    prime_numbers(ap,bp,cp,x);
    printf("%d+%d+%d=%d",c,b,a,x);
    return 0;
}