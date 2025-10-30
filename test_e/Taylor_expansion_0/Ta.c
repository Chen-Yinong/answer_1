#include<stdio.h>
#include<math.h>

double Tayl(double x,int n)
{
    double s=0;
    int i = 1;
    for (int j = 0; j < n; j++)
    {
        s += ((pow(x,(double)(i)))/(double)(i))*pow(-1.0,j);
        i += 2;
    }
    return s;
}

int main()
{
    double x;
    int n;
    printf("enter:");
    scanf("%lf %d",&x,&n);
    double a=Tayl(x,n);
    printf("%.2f",a);
}