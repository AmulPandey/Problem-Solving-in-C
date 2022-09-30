#include <stdio.h>


int dubli(int [],int );

int main()
{
    int count;
    
    int a[5];

    count = dubli(a,5);
    printf("\n Total Number of Duplicate Elements in this Array  =  %d ", count);
 
    return 0;
}


int dubli(int b[],int n )
{ 
    int i,j,count=0;
    printf("enter 5 numbers\n");

    for (int i = 0; i<n; i++)
      scanf("%d",&b[i]);
     
    for (int i = 0; i<n-1; i++) 
      { 
        //iF j = 0 then we compare two elements more than 1 times.
        for ( j = i+1; j <= n-1; j++)
        {
            if (b[i]==b[j])
            {
                count++;
                break;
            }
            
        }
             
      }     
    
    return count;
}