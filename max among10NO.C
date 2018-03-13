   #include<stdio.h>
void main()
{
    int a[100],b,i,f=0;
    printf("enter the values ");
       for(b=0;b<10;b++)
    scanf("%d",&a[b]);
        for(i=0;i<10;i++)
        {
            if(f<a[i])
            f=a[i];
        }
    printf("the maximum nuber is %d",f);
}
