#include<stdio.h>
void main()
{
    int a=1,n;
    printf("last number you want=");
    scanf("%d",&n);
    do
    {
        printf("\n%d",a);
        a+=2;
    } while (a<=n);
    
}