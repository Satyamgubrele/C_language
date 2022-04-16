#include<stdio.h>
#include<string.h>
void main()
{
    
    
char str[35];
int i=0;
gets(str);

while(str[i]!='\0')

i++;
printf("%s count is=%d",str,i);


}