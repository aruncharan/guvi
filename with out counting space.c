#include<stdio.h>
void main()
{
    char a[100];
    int i,b=0,c=0;
    printf("enter the character ");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
        if(a[i]==' ')
        b++;
    }
    printf("total character=%d",c-b);
}
