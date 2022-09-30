#include <stdio.h>


int greatest(int [],int );

int main()
{
      
      int x[10];
        printf("enter 10 numbers\n");

    for (int i = 0; i<10; i++)
      scanf("%d",&x[i]);
    
    printf("greatest value is %d",greatest(x,10));

    return 0;
}


int greatest(int a[],int n )
{ 
    int i,s;
  
    
    
    s = a[0];
    for (i = 1; i<=n; i++)
      {  

        if (s >= a[i])
      {
         s = s;
      }
      else
         s = a[i];
      }
        
     return s;
    
}