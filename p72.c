#include <stdio.h>
int main()
{ 
     int i,j,len,count,flag=0;
     char str[4][15];
  
   printf("enter 4 strings\n");
   for( i = 0; i < 4; i++)
      gets(str[i]);
   
   
  for ( i = 0; i < 4; i++)
  {
       len = 0;
       count =0;
   for ( j = 0; j < str[i][j]; j++);
     {  
        len = j;
    
   for ( j = 0; j<len/2; j++)
       {
             
         if(str[i][j] != str[i][len-j-1])
             {  count++;
               break;
             } 
  
        }
     }

      if (count == 0)
       {
         flag++;
         printf("i = %d string is palindrome\n",i+1);
       }
      
     
  }  

      if (flag == 0)
        printf("no palimdrome string is found");

       return 0;
}