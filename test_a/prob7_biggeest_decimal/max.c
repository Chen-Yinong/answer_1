#include<stdio.h>

int main()
{
    int a[4],t;
    printf("enter 4 numbers between 0 and 9,avoid 0 0 0 0:");
    scanf("%d %d %d %d",,&a[1],&a[2],&a[3]);
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
        
    }
    printf("%d%d%d%d",a[3],a[2],a[1],a[0]);
    return 0;
}