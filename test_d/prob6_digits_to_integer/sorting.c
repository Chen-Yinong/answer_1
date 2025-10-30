#include<stdio.h>

void sorting_digits(int *digits,int size)
{
    int t = 0;
    for(int i = 0;i < size-1;i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (digits[j] > digits[j+1])
            {
                t = digits[j];
                digits[j] = digits[j+1];
                digits[j+1] = t;
            }
            
        }
        
    }
    return;
}

int main()
{
    int a[4]={0,0,0,0};
    printf("enter four digits:");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    int *p = a;
    sorting_digits(p,4);
    printf("maximum number:");
    for (int i = 0; i < 4; i++)
    {
        printf("%d",a[3-i]);
    }
    printf("\n");
    return 0 ;
}