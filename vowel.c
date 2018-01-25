#include<stdio.h>
void main()
{
    char ab;
    printf("enter ab value");
    scanf("%c",&ab);
    if(ab=='a'||ab=='e'||ab=='i'||ab=='o'||ab=='u')
    printf("\nvowel");
    else
    printf("\nconsonant");
}
