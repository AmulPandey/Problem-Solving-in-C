#include <stdio.h>
#include <string.h>
int main()
{ 
     int i,j,n,fact = 1;
     
     char str[3][15] = {"amul","abhay","ram"};
     char user[15];
     printf("enter a string\n");
     gets(user);
  
   
    for( i = 0; i < 3; i++)
    {
      if (strcmp(user,str[i]) == 0)
       {
           printf("you are allowed to calculate factorial \n enter a number to calculate factorial\n");
           scanf("%d",&n);
           
           for ( i = 1; i <= n; i++)
                  {
                   fact = fact*i;
               }
                      printf("%d",fact);
                      break;
       }
         
     }     
     
           if (i == 3)
            printf("error");
        
       return 0;
}