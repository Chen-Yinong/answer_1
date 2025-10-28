#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the depth and capability of jumping:");
    scanf("%d %d",&a,&b);
    printf("It have to at least jump %d times",a/b+1);

}