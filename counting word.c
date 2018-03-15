#include<stdio.h>
void main()
{
    char a[100];
    int b,i,c;
    printf("enter the character value ");
    scanf("%[^\n]",&a);
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        c++;
    }
    printf("the total number of word =%d",c+1);
}
