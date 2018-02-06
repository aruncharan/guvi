#include<stdio.h>
void main()
{
    int a,b,c=0,d;
    printf("enter the  a value");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b=a%10;
        c=c*10+b;
        a/=10;
    }
    if(d==c)
    { 
        printf("this is a palindrome number");
    }
     else
      printf("this is a not palindrome number");
}
