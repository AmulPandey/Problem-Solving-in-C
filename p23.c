#include <stdio.h>
int main()
{ 
    int i,j;
    char k;
   
 for (i = 1; i <= 7; i++)
 {
    k='A'-1;
    for (j = 1; j <= 13; j++)
    {
        
        j<8?k++:k--;
        if(j >= 9-i && j <= 5+i)
        
            printf(" ");
       else
           printf("%c",k);



    }
     printf("\n");
 }

return 0;
}