#include <stdio.h>


void rotate(int [],int );

int main()
{
      
    int a[5];

    rotate(a,5);
     
    return 0;
}


void rotate(int b[],int n )
{ 
    int i,j,t;
    printf("enter 5 numbers\n");

    for (int i = 0; i<n; i++)
      scanf("%d",&b[i]);
   
    for ( j = 0; j < 2; j++)
    {
       t = b[0];
      for ( i = 0; i < n-1; i++)
      {
        b[i]=b[i+1];

      }
      b[n-1]=t;
    }
    

   for (i = 0; i < n; i++)
   {
       printf("\n%d",b[i]);
   }
   
    
}
