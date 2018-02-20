#include<stdio.h>
void main()
{
    int a[100],b,i,c,d,e,f=0;
    printf("enter the value ");
    scanf("%d",&c);
    printf("enter the value ");
    for(b=1;b<=c;b++)
     scanf("%d", &a[b]);
         for(d=1;d<c;d++)
         {
         if(f<a[d])
         f=a[d];
         }
      printf("the maximem value %d",f);
}

