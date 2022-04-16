#include<stdio.h>
#include<string.h>
void main()
{
    /*char str1[30]="hello";
    char str2[45]="everyone";
    strcat(str1,str2);
    puts(str1);*/
    char str1[30]="hello";
    char str2[45]="everyone";
    char str3[34]=" my";
    char str4[45]="is satyam gubrele.";
    strcat(strcat(strcat(str1,str2),str3),str4);
    puts(str1);
}