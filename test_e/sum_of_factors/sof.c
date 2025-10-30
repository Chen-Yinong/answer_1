#include<stdio.h>
#include<math.h>

int sof(int a)
{
    int s=1;
    for(int i = 1;i <= (int)sqrt((double)(a));i++)
    {
        if (a % i ==0)
        {
            s += i;
            s += s/i;
            
        }
        
    }
    return s;
}

int main()
{
    int a;
    printf("enter:");
    scanf("%d",&a);
    int b=sof(a);
    printf("%d",b);
}