#include<stdio.h>
void main()
{
    int a,b,i,d;
    printf("enter the a value  ");
    scanf("%d",&a);
    printf("enter the b value   ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
       d=i%2;
       if(d==0)
        printf("\n %d",i);
    }
}
