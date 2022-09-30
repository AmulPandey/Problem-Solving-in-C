#include <stdio.h>
int main()
{ 

    int i,j,a[3][3],sum=0;
           
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
      for ( j = 0; j < 3; j++)
      {
         //for sum of left diagonal of matrix: i=j
         if ((i+j)==2)
         {
            sum = sum + a[i][j];
         }
      
      }
      
    }
     printf("sum of right diagonal matrix is %d:",sum);

     return 0;

}