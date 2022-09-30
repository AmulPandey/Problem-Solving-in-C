#include <stdio.h>


int palindrom(char str[]);


int main()
{ 
  
   char str[100];
   printf("enter a string\n");
   gets(str);

  
   palindrom(str)?printf("palimdrome string"):printf("not palimdrom");
  
    return 0;
}


int palindrom(char str[])
{
   int i,j,len,count=0;
  
   for ( j = 0;str[j]; j++);
        len = j;

   for ( i = 0; i<len/2; i++)
    {
             
         if(str[i] != str[len-i-1])
             {  count++;
               break;
             }
  
    }
      
       
    if (count == 0)
        return 1;
    else
        return 0;    
     
}