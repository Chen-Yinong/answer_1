#include<stdio.h>

int product_of_common_factors(int a,int b)//使用函数计算最大公因数
{
    int min,product = 1;//为循环做准备
    if(a <= b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    for(int i = 1;i <= min ;i++)
    {
        if (a % i == 0 && b % i == 0)//寻找公因数和计算乘积一起搞定
        {
            product *= i;
        }
        
    }
    return product;
}

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);//输入十进制整数，n表示newline
    int result = product_of_common_factors(a,b);//储存结果
    printf("%d\n",result);//输出十进制整数和换行符
    return 0;
}