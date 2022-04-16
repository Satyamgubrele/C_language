#include<stdio.h>
void main()
{

int a[5],i,j;

printf("enter the numbers  ");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&a[i]);
}
printf("order is : ");
for(i=0;i<5;i++)
{
a[i]=a[i]+5;
printf("%d\n",a[i]);
}
}

