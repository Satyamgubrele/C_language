#include<stdio.h>
#include<conio.h>
void main()
{
    int x[10];
    int i;
   
    for(i=0;i<10;i++) 
    {       
        printf("\n");
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        if(x[i]%2!=0)
        printf("odd:%d\n",x[i]);
        else
        {
            printf("even:%d\n",x[i]);
        }
    }
    
getch();
}
