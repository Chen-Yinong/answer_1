#include<stdio.h>

int main()
{
    long long l,d;
    printf("Enter the length of the bank and the distance between two trees:");
    scanf("%lld %lld", &l, &d);
    long long n = l / d + 1;
    printf("The number of trees that can be planted is: %lld\n", n);
}