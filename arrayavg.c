#include<stdio.h>
#include<conio.h>
void main()
{
    int x[5];
    int i,sum;
    sum=0;
    float avg;
    for(i=0;i<5;i++) 
    {       
        printf("num\n");
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+x[i];
    }
    avg=sum/5;
    printf("%f",avg);
getch();
}





