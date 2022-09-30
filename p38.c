#include <stdio.h>

int main()
{ 
    int i,j,a[10],t;
    printf("enter 10 numbers\n");

   for (i = 0; i<10; i++)
     scanf("%d",&a[i]);
    
   for (i = 0; i<9; i++)
       {
        for (j = i+1; j<=9; j++)
        
            {
            if (a[i]>a[j]) 
             {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
             }
            
             
            }   
        }

   for (i = 0; i < 10; i++)
   {
       printf("\n%d\n",a[i]);
   }
   
return 0;
}