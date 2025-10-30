#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int A[100];
    srand((unsigned)time(NULL));
    for (int i = 0; i < 100; i++)
    {
        A[i] = rand() % 10;
    }
    for (int i = 0; i < 100; i++)
    {
        printf("%d",A[i]);
    }
    printf("\n");
    int n;
    printf("enter:");
    scanf("%d",&n);
    for (int i = n; i < 99; i++)
    {
        A[i] = A[i+1];
    }
    A[99] = 0;
    for (int i = 0; i < 100; i++)
    {
        printf("%d",A[i]);
    }
}