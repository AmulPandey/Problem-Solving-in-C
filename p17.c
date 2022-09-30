#include <stdio.h>
int main()
{ 
    int i,j,k;
   
 for (i = 1; i <= 5; i++)
 {
    
    for (j = 1; j <= 10; j++)
    {
        
        
        if(j >= 7-i && j <= 4+i)
            
            printf(" ");
       else
           printf("*");

    }
     printf("\n");
 }

return 0;
}