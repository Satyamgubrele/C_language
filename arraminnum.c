#include<stdio.h>
#include<conio.h>
void main()
{
    int x[10];
    int i,min;
    min=x[0];

   
    for(i=0;i<10;i++) 
    {       
        printf("num\n");
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        
        if(x[i]<min)
        min=x[i];
    }
    printf("smallest num is :%d",min);
    
    
    
getch();
}
