#include <stdio.h>


void sort(int [],int );

void freq(int [],int );

int main()
{
      
    int a[7];
    
    sort(a,7);
    freq(a,7);
     
    return 0;
}


void sort(int b[],int n )
{ 
      int i,j,t;
    printf("enter 7 numbers\n");

    for (int i = 0; i<n; i++)
      scanf("%d",&b[i]);
  
  
  printf("shorted array is:");

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


void freq(int c[],int n)
{
     int i=0,j=0;
     
   printf("\nfrequency of elements :");

  while (i<n)
  {
    
    int count =0;
     while (c[i]==c[j] && j < n)
     {
          count++;
          j++;
     }
      printf("\n%d element is %d times",c[i],count);
      i=j;
     
  }

}