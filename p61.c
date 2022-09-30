#include <stdio.h>


void reverse(char str[]);


int main()
{ 
  
   char str[100];
   printf("enter a string\n");
   gets(str);
    
   reverse(str);
   
return 0;
}


void reverse(char str[])
{
   int i,len,t;
  
   for ( i = 0;str[i]; i++);
    len = i;

   for ( i = 0; i<len/2; i++)
    {
              t = str[i];
         str[i] = str[len-i-1];
   str[len-i-1] = t;

    }
 
   for (i = 0; i < len; i++)
   
      printf("%c",str[i]);

}