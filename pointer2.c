#include<stdio.h>
void main()
{
 int x,y,z;
 int *p1,*p2;
  x = 10;
   y = 20;
   p1 = &x;
   p2 = &y;
   printf("%d",*p1);
   printf("\n");
   printf("%d",*p2);
   *p1 = 15;
   *p2 = 35;
   printf("\n");
  printf("%d",x);
  printf("\n");
  printf("%d",y);
}
