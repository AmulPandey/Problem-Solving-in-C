#include <stdio.h>


int dubli(int [],int );

int main()
{
      
    int a[5];

    dubli(a,5);
 
    return 0;
}


int dubli(int b[],int n )
{ 
    int i,j,t;
    printf("enter 5 numbers\n");

    for (int i = 0; i<n; i++)
      scanf("%d",&b[i]);
     
    for (int i = 0; i<n; i++) 
       if (b[i]==b[i+1])
    {
        printf("\nfound at index %d and %d",i,i+1);
        printf("\nvalues are %d and %d",b[i],b[i+1]);
        return b[i];
        break;
    }
      return 0;
    
}