#include<stdio.h>
void main()
{
    int a,n,d,t,i,f,g;
    printf("enter the first value = ");
    scanf("%d",&a);
    printf("enter the difference value = ");
    scanf("%d",&d);
    printf("enter the total number of value = ");
    scanf("%d",&n);
     t=a+((n-1)*d);
     f=n/2;
     g=f*(a+t);
     printf("the arithametic value %d",g);
}

