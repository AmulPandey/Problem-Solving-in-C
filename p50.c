#include <stdio.h>
int main()
{ 

    int i,j,a[3][3],sum;
           
    printf("enter 9 numbers of matrix \n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }       
    

    
    for (i = 0; i <3 ; i++)
    {
      sum=0;  
      for ( j = 0; j < 3; j++)
      {
        sum = sum + a[i][j];
      
      }
      printf("\nsum of %d row of matrix is %d:",i+1,sum);
    }


    for (j = 0; j <3 ; j++)
    {
      sum=0;  
      for ( i = 0; i < 3; i++)
      {
        sum = sum + a[i][j];
      
      }
      printf("\nsum of %d collumn of matrix is %d:",j+1,sum);
    }
     return 0;

}