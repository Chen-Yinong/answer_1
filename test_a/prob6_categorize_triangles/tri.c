#include<stdio.h>

int main()
{
    float a,b,c,t;
    printf("enter three sides:");
    scanf("%f %f %f",&a,&b,&c);
    if(a + b <= c || b + c <= a || a + c <= b)
    {
        printf("Not a triangle\n");
        return 0;
    }
    if( a > b )
    {
        t = a;
        a = b;
        b = t;
    }
    if( b > c )
    {
        t = b;
        b = c;
        c = t;
    }
    if(a*a + b*b == c*c)
    {
        printf("right triangle\n");
    }
    if(a*a + b*b < c*c)
    {
        printf("obtuse triangle\n");
    }
    if(a*a + b*b > c*c)
    {
        printf("acute triangle\n");
    }
    return 0 ;


}