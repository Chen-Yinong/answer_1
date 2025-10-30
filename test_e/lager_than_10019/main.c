#include<stdio.h>

int count(double a,double b,double c)//简单粗暴的比大小和计数
{
    int d = 0;
    if (a > 100.19)
    {
        d++;
    }
    if (b > 100.19)
    {
        d++;
    }
    if (c > 100.19)
    {
        d++;
    }
    return d;
}

int main()
{
    printf("enter:");
    double i1,i2,i3;
    scanf("%lf %lf %lf",&i1,&i2,&i3);
    //输入3个双精度浮点数
    int n = count(i1,i2,i3);
    printf("%d",n);
}