#include <stdio.h>
#include <string.h>

int main()
{

    char a[5][20];
    char st[20];
  
      int i,j,t;
    printf("enter 5 string\n");

    for (int i = 0; i<5; i++)
      gets(a[i]);
  
    
   for (i = 0; i < 4; i++)
       {
          for ( j = i+1; j < 5; j++)
          {
            
            if (strcmp(a[i], a[j]) > 0) 
             {
              strcpy(st, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], st);
             }

          }  
       }     
   for (i = 0; i < 5; i++)
        {     

              printf("\n%s",a[i]);
         
       }
      
        return 0;

}