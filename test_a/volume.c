# include <stdio.h>

double volume(double l, double w, double h) 
{
    return l * w * h;
}

int main()
{
    double L = 14.2,W = 5.0,H = 6.6;
    double v = volume(L,W,H);
    printf("The volume of the box is :%.2f\n",v);
}