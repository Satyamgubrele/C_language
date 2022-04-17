
#include<stdio.h>
int main()
{
 int a,b,*p1,*p2,sum;
 a=34;
 b=78;
 p1=&a;
 p2=&b;

 sum=*p1 + *p2;

 printf("%d",sum);


  return 0;
}