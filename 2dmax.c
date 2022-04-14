#include<stdio.h>
void main()
{
int x[2][2],i,j;
int max=0;
for(i=0;i<2;i++)    
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&x[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        if(max<x[i][j]);
        max=x[i][j];
    }

}
printf("%d is max",max);
}




















