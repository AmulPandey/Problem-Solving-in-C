#include <stdio.h>
int main()
{ 
    int i,n,current = 1,prev = 0,next;
    printf("enter the nth term of fib series\n");
    scanf("%d", &n);
    

    
    if (n >= 3)
    {
        
    
   
    for(i =1; i <= n-2; i++)
    {

       next = current + prev;
       prev = current;
       
       current = next;
      
      
    }
    printf("%d",next);
    }
   
   else if ( n == 2)
       printf("1");
   else 
      printf("0");
    


return 0;
}