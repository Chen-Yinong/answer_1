#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double* product_of_vector_and_matrix(const double matrix[2][3],const double vector[3])
{
    double* product = (double* )malloc(2 * sizeof(double));//malloc 分配“连续的内存盒子”，返回首盒子的地址，用 product[i]（= *(product+i)) 访问。
    double t = 0;
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0;j < 3; j++)
        {
            t += matrix[i][j]*vector[j];
        }
        product[i] = t;
        t = 0;
    }
    return product;
}

int main()
{
    double pi = 3.141592653;
    double A[2][3] = {
        {exp(0.0),pow(2.0,2.0),fmod(3.0,2.0)},
        {sqrt(4.0),fabs(-3.0),pow(2.0,-2.0)},
    };
    double vect[3] = {sin(pi/6.0),cos(pi/6.0),log10(100)};
    double* ans = product_of_vector_and_matrix(A,vect);//声明ans 是指向 double 的指针
    for (int i = 0; i < 2; i++)
    {
        printf("%.1f ",ans[i]);
    }
    printf("\n");
    free(ans);
    return 0;
}