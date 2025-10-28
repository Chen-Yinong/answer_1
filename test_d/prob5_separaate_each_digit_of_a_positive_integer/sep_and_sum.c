#include<stdio.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int sum=0;
    for(int i = 0;i<100;i++)
    {
        if (a[i] == '\0')
        {
            break;
        }
        sum += (int)(a[i] - '0');
    }
    printf("%d\n",sum);
    return 0;
}