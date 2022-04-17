#include<stdio.h>
void main()
{
int *p,*q;
int a,b,temp;

printf("Enter 1st number a:\n");
scanf("%d",&a);
printf("Enter 2nd number b:\n");
scanf("%d",&b);
p=&a;
q=&b;

temp=*p;
*p=*q;
*q=temp;
printf("Values a:%d\n B:%d",a,b);
}