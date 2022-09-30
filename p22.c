#include <stdio.h>
int main()
{ 
    int i,j,k;
   
 for (i = 1; i <= 4; i++)
 {
    k=0;
    for (j = 1; j <= 7; j++)
    {
        
        j<5?k++:k--;
        if(j >= 6-i && j <= 2+i)
          
        
            printf(" ");
       else
           printf("%d",k);



    }
     printf("\n");
 }

return 0;
}