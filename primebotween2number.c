#include<stdio.h>
void main()
{
    int a,b,i,d;
    printf("enter the a,b value");
    scanf("%d %d",&a,&b);
    printf("prime nuber between %d and %d ", a,b);
    while(a<b)
    {
        d=0;
    for(i=2;i<=a/2;++i)
    {
        if(a%i==0)
        {
            d=1;
            break;
        }
        if(d==0)
        printf("%d",a);
        ++a;
    }
    }
}
