#include <stdio.h>
int main ()
{
    int year;
    year=2026;
    
    if(year % 400 == 0)
        printf("%d is a Leap Year",year);
        
    else if(year % 4 == 0  && year % 100 != 0)
        printf("%d is a Leap Year",year);
        
    else
        printf("%d is not a Leap Year",year);
    
    return 0;
}






/*
#include <stdio.h>
int main()
{ 
    int x,n,m;
    
    printf("enter a year\n");
    scanf("%d",&x);

   
   
     n = x % 10;
     x = x / 10;
     m = x % 10;
  
   
     x = (x*10)+n;

   if (n==0 & m ==0)
   {
    if (x%400 == 0)
    {
        printf("this is a leap-year");
    }
    else{
        printf("this is not a leap-year");
    }

   }
   else if (x%4 == 0)
   {
     printf("this is a leapyear");
   }
   else
   {
    printf("this is not a leapyear");
   }


return 0;
}

*/
