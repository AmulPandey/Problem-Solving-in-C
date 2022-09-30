#include <stdio.h>
int main()
{ 

    int i,j,a[3][3],b[3][3],c[3][3],sum;
  
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
   
    printf("product of array is:");

    for (i = 0; i <3 ; i++)
    {
      for ( j = 0; j < 3; j++)
      {
            //for 3*3 matrix
            //c[i][j] = (a[i][0] * b[0][j]) + (a[i][1] * b[1][j]) + (a[i][2] * b[2][j]); 
            //printf("\n%d",c[i][j]);
            //for general:
            sum =0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
                c[i][j] = sum;
               
            }
         
      }
      
    }

      for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            printf("\n%d",c[i][j]);
        }
    }

return 0;
}