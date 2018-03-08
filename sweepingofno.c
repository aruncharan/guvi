#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the values ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after the sweeping values %d %d",a,b);
}
