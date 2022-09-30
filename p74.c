#include <stdio.h>
#include <string.h>
int main()
{ 
     int i,j,var1,var2,min=0,temp;
     //declare temp = 0 after taking input.
     
     char str[4][15];
     char a[15];
     char b[15];
  
   printf("enter 5 strings\n");
   for( i = 0; i < 5; i++)
      gets(str[i]);
   
   printf("enter first string\n");
   gets(a);

   printf("enter second string\n");
   gets(b);
   
   temp = 0;
   for ( i = 0; i < 5; i++)
   {
     
         if (strcmp(a,str[i]) == 0)
                   var1 = i;
          
      
         if (strcmp(b,str[i]) == 0 && temp == 0)
                  { 
                     var2 = i;
                     temp++;
                  } 
                       
            
   }   
                
                
         min = (var2 - var1);
         if (min < 0)
         {
            min = -1*min;
         }
         
         printf("%d\n",min-1);
        

       return 0;
}    
