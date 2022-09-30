#include <stdio.h>
#include <string.h>
int main()
{ 
     int i,j;
     
     char str[3][15];
     char com[15] = ("");
  
   printf("enter 3 strings\n");
   for( i = 0; i < 3; i++)
      gets(str[i]);
   
     for (i = 0; i < 3; i++)
     {
       
       if (strcmp(com,str[i]) == 0)
       {
         printf("i = %d is a IP adress.",i);
       }
   
     }
   

       return 0;
}