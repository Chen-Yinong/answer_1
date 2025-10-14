#include<stdio.h>
#include<stdlib.h>

/*Given two vectors u, v ∈ ℝⁿ and scalars x, y, compute
w = x·u + y·v and print w.*/

void lincomb(const int *u , const int *v ,int *w,int n,int x,int y)
{
    for (int i = 0; i < n; i++)
    {
        w[i] = x * u[i] + y * v[i]; 
    }
    
}

int main()
{
    int n,x,y;
    printf("Enter dimension n and two factors x , y \n");
    scanf("%d %d %d",&n,&x,&y);
    int *u = (int *)malloc(n * sizeof(int));
    int *v = (int *)malloc(n * sizeof(int));
    int *w = (int *)malloc(n * sizeof(int));
    printf("Enter vectors u(%d elements ):", n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",& u[i]);
    }
    printf("Enter vectors v(%d elements ):", n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",& v[i]);
    }
    lincomb(u,v,w,n,x,y);
    printf("Your liner combination:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",w[i]);
    }
    free(u);
    free(v);
    free(w);
    printf("\n");
    return 0;
}
//声明里的星号（int *p）表示“p 是指向 int 的指针”；表达式里的星号（*p）是“解引用运算”。
//解引用就是“用指针里存的地址，去访问那个地址上的对象”（可以读，也可以写）
/*
&u[i] 的类型：int*（也是第 i 个元素的地址）
u[i] 的类型：int（第 i 个元素的值）
*(u + i)：int（解引用得到元素的值）
恒等关系：
u[i] == *(u + i) */