#include<stdio.h>
#include<math.h>

int product_of_comfac(int int1,int int2)
{
    int count = (int)(fmin(int1,int2)),my_prod = 1;
    for(int i = 1;i <= count;i++)
    {
        if (int1%i==0 & int2%i == 0)
        {
            my_prod *= i;
        }
        
    }
    return my_prod;
}

int main()
{
    int a,b;
    printf("enter two decimal integers:");
    scanf("%d %d",&a,&b);
    printf("product_of_all_common_factors:%d\n",product_of_comfac(a,b));
}