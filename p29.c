#include <stdio.h>

int check(int);

int main()
{ 
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
   
    check(n)?printf("prime number"):printf("not prime number");

return 0;
}


int check(int x)
{


int f,i;
    
     f = 0;
    for ( i = 2; i <= x/2; i++)
        
       {
        if (x % i == 0)
        
        {
          f++;
          break;
        }
       }
         
       if (f == 0 )
       {
        return 1;
       }
       else
        return 0;


}
