#include <stdio.h>
int main()
{ 

    int i,j,a[3][3],b[3][3],c[3][3];
  
    printf("enter 9 numbers of aaray 1\n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }


    printf("enter 9 numbers of array 2\n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
   
    printf("sum of array is:");
    for (i = 0; i <3 ; i++)
    {
      for ( j = 0; j < 3; j++)
      {

         c[i][j] = a[i][j] + b[i][j];
         
        
         printf("\n%d",c[i][j]);

      }
      
    }

return 0;
}