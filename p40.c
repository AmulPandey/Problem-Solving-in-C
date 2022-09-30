#include <stdio.h>


void sort(int [],int );

int main()
{
      
    int a[5];

    sort(a,5);
     
    return 0;
}


void sort(int b[],int n )
{ 
      int i,j,t;
    printf("enter 5 numbers\n");

    for (int i = 0; i<n; i++)
      scanf("%d",&b[i]);
  
    
   for (i = 0; i<n-1; i++)
       {
        for (j = i+1; j<n; j++)
        
            {
            if (b[i]>b[j]) 
             {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
             }
              
            }   
        }

   for (i = 0; i < n; i++)
   {
       printf("\n%d",b[i]);
   }
   
    
}