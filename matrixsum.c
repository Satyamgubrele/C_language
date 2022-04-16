#include<stdio.h>
void main()
{

int a[2][2],i,j,b[2][2],sum[][];

printf("enter the numbers");
for ( i = 0; i < 2; i++)
{
    for(j=0;j<2;j++)
   {
        scanf("%d",&a[i][j]);
   }

}
printf("enter the numbers");
for ( i = 0; i < 2; i++)
{
    for(j=0;j<2;j++)
   {
        scanf("%d",&b[i][j]);
   }
   

for ( i = 0; i < 2; i++)
{
    for(j=0;j<2;j++)
   {     
        sum[i][j]=a[i][j] + b[i][j];
        printf("sum\t",sum[i][j]);
   }
 
   }
   
}