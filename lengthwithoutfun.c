#include<stdio.h>
#include<string.h>
void main()
{
int c=0,i=0;

char pera[90]="my name is satyam gubrele. I m living in jhansi.Thankyou.";


while(pera[i]!='\0')
{
    c=c+1;
    i++;
}

printf("count is %d",c);



}