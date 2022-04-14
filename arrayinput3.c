#include<stdio.h>
#include<conio.h>
void main()
{
    int x[5]={2,5,6,7,8};
     int sum=0;
    int *p;
    p=x;
   


    for(int i=0;i<5;i++) 
    {       
        sum = sum + *p + x[i];
    }
printf("%d",sum);
}





