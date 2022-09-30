
#include <stdio.h>
int main()
{ 
    int i,a[10],s;
    printf("enter 10 numbers\n");

    for (i = 0; i<10; i++)
     scanf("%d",&a[i]);
    
    s = a[0];
    for (i = 1; i<=10; i++)
      {  

        if (s >= a[i])
      {
         s = s;
      }
      else
         s = a[i];
      }
        
    
      printf("greatest numbers is %d",s);
return 0;
}
