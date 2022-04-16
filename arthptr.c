#include<stdio.h>

int main(){  
int n=50;        
int *p;    
p=&n;      
printf("Address of p var is %u \n",p);        
p=p+1;        
printf("After increment: Address of p vari is %u \n",p);       
return 0;  
}    