#include<stdio.h>
void main()
{
    int a[100],b,i,c,d,e,f,k;
    printf("enter the value ");
    scanf("%d",&c);
    printf("enter the value ");
    for(b=1;b<=c;b++)
     scanf("%d", &a[b]);
         for(d=1;d<=c;d++)
         {
         if(a[d]>f)
         f=a[d];
         }
      printf("the maximum value %d",f);
          for(d=1;d<=c;d++)
         {
         if(a[d]<f)
         f=a[d];
         }
      printf("\nthe minimum value %d",f);
}
