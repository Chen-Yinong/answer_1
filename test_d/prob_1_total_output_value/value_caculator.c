#include<stdio.h>
#include<math.h>

double total_value(double initial_value,double rate_of_rise,int n_months)
{
    double my_sum = 0.0;
    for (int i = 0; i < n_months; i++)
    {
        my_sum += initial_value*pow(1.0+(rate_of_rise)/100.0,i*1.0);
        
    }
    return my_sum;
}

int main()
{
    printf("%lf",total_value(3,10,6));
}