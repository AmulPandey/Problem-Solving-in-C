#include <stdio.h>

int main()
{
    int i,j;
   int a[10],t;
   int *p = a;
   printf("enter 10 numbers\n");
   for (i = 0; i < 10; i++)
   {
    scanf("%d",&a[i]);
   }
  
   
    for (i = 0; i < 5; i++)
   {
            j = 10-1-i;
            t = *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = t;
        
   }    
   
     for (i = 0; i < 10; i++)
   {
      printf(" %d",a[i]);
   }


    return 0;
}
