#include <stdio.h>
int main()
{ 
    int n,i,j,k;
   
 for (i = 1; i <= 5; i++)
 {
   
    for (j = 1; j <= 9; j++)
    {
        if(i+j==6 || j==4+i || i == 5)
          {  
            printf("*");

          }
       else
          
          { printf(" ");

            }
    }
     printf("\n");
 }

return 0;
}