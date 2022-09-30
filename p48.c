#include <stdio.h>
int main()
{ 

    int i,j,a[3][3],t[3][3],temp;
  
    printf("enter 9 numbers of aaray \n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }


    printf("transpose of array is:");
    for (i = 0; i <3 ; i++)
    {
      for ( j = 0; j < 3; j++)
      {

         t[i][j] = a[i][j];
          

      }
      
    }

     for (i = 0; i <2 ; i++)
    { 
      for ( j = 0; j < 3; j++)
      {

        if (i!=j && j!=0)
        {
           temp = t[i][j];
           t[i][j] =  t[j][i];
           t[j][i] = temp;
         
        }
        

      }
      
    }

     for (i = 0; i <3 ; i++)
    {
      for ( j = 0; j < 3; j++)
      {

        printf("\n%d",t[i][j]);

      }
      
    }
          


return 0;
}