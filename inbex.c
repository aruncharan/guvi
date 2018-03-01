#include<stdio.h>
void main()
{
    int b[100],a,i;
    printf("enter the value ");
    scanf("%d",&a);
    printf("enter the value ");
    for(i=0;i<a;i++)
    scanf("%d",&b[i]);
    for(i=0;i<a;i++)
    printf("\n%d %d",b[i],i);
    
}
