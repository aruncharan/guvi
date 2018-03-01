#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter the hours and mintes value =");
    scanf("%d%d",&a,&b);
    printf("enter the next hours and mintes value = ");
    scanf("%d%d",&c,&d);
    e=a-c;
    f=b-d;
    printf("hours value=%d mintes value=%d",e,f);
}
