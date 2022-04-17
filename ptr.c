#include <stdio.h>


int main(){
    
   
   int *pt;
   int var;
   
   var=1;
   
   printf("Address of var:%d\n",&var);
   printf("Value   of var:%d\n\n",var);
   
   
   pt=&var;
   
   printf("Address of Pointer pt:%d\n",pt);
   printf("Content of Pointer pt:%d\n\n",*pt);
   
   var=2;
   
   printf("Address of Pointer pt:%d\n",pt);
   printf("Content of Pointer pt:%d\n\n",*pt);
   
  
   *pt=3;
   
   printf("Address of var:%d\n",&var);
   printf("Value   of var:%d\n",var);
   
   return 0;
   
}