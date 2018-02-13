#include<stdio.h>
void main()
{
    int a[50],b,c,d,e,i=0;
    printf("the value");
    scanf("%d",&e);
    for(b=1;b<=e;b++)
    {
        printf("enter the value");
        scanf("%d",&a[b]);
    }
    printf("enter the sum of value");
    scanf("%d",&c);
    for(d=1;d<=c;d++)
    i=i+a[d];
    printf("%d",i);
}
