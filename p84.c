#include <stdio.h>
#include<string.h>

int main()
{
    int i,j;
   char a[20],t;
   char *p = a;
   printf("enter a string\n");
   gets(a);
  
   int len = strlen(a);
   

    for (i = 0; i < len/2; i++)
   {
            j = len-1-i;
            t = *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = t;
        
   }    
   
   
      printf(" %s",a);
   


    return 0;
}
