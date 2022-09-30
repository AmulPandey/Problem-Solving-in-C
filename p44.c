#include <stdio.h>


void uniqe(int [],int );

int main()
{
    
    int a[5];

    uniqe(a,5);
   
 
    return 0;
}


void uniqe(int b[],int n )
{ 
    int i,j,count;
    printf("enter 5 numbers\n");

    for (int i = 0; i<n; i++)
      scanf("%d",&b[i]);
     
    for (int i = 0; i<n; i++) 
      { 
        count =0;
        // here we have to check all elements before and after that elements.
        for ( j = 0; j < n; j++)
        {
            if (b[i]==b[j] && i!=j)
            {  
               count++;
               break;
            }
          
              
        }   

           if (count==0)
             {
               printf("%d",b[i]);
             }
              

      }
          if(count !=0)
             printf("no uniqe elements found");
}