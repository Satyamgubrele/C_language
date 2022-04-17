#include<stdio.h>
void main()
{
int x[2][2],i,j;
int transpose[2][2];
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
        printf("%d\t",x[i][j]);
    }
        printf("\n");

}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        transpose[i][j]=x[j][i];
    }
       

}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d\t",transpose[i][j]);
    }
        printf("\n");

}

}
