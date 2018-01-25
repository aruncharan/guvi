#include<stdio.h>
void main()
{ 
    int a,b,i;
    printf("enter the a,b,i values\n");
    scanf("%d%d%d",&a,&b,&i);
    if ((a>b)&&(a>i))
    printf("a is largest value\n");
    else if(b>i)
    printf("b is largest value\n");
    else 
    printf("i is largest value\n");
}
