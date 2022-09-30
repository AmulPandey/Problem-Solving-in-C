#include <stdio.h>
int main()
{ 
    int n,f,i;
    printf("enter a number");
    scanf("%d",&n);
     

     f = 0;
    for ( i = 2; i <= n/2; i++)
        
       {
        if (n % i == 0)
        
        {
          f++;
          break;
        }
       }
         
       if (f == 0 && n != 1)
       {
        printf(" prime number");
       }
       else
       printf(" not prime number");

return 0;
}


