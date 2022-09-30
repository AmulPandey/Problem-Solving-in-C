#include <stdio.h>


void reverse2(char str[]);


int main()
{ 
  
   char str[100];
   printf("enter a string\n");
   gets(str);
    
   reverse2(str);
   
return 0;
}


void reverse2(char str[])
{
   int i,len,t;
  
   for ( i = 0;str[i]; i++);
    len = i;

    

    
 
   for (i = 0; i < len; i++)
   
      printf("%c",str[i]);

}