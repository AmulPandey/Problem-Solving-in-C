#include <stdio.h>
int main()
{ 
    int n,f,i;
   
    for (n = 1; n < 101; n++)
    {
        f = 0;
    for ( i = 2; i <= n/2; i++)
    
       {
        if (n % i == 0)
          
          {
          f++;
          break;
          }
       }
         
       if (f == 0  && n!= 1)
    
        {
        printf("%d\n",n);
        }
       
    }
return 0;
}

/*
to print next prime number run for loop from the given number and break after one print.
*/
