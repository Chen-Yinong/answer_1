#include<stdio.h>

int coneven(int a)
{
    int b,c;
    while (a > 0)
    {
        b = a % 10;
        a = (a-b)/10;
        if(b % 2 == 0)
        {
            c++;
        }
    }
    
    return c;
}

int main()
{
    int a;
    printf("enter:");
    scanf("%d",&a);
    int b = coneven(a);
    printf("%d",b);
}