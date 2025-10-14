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