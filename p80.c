#include <stdio.h>


int main()
{
    int n1,n2,*ptr1,*ptr2;
    ptr1 = &n1;
    ptr2 = &n2;
  
   printf("enter 2 numbers\n");
   scanf("%d %d",ptr1,ptr2);

   if (*ptr1 > *ptr2)
      printf("%d",*ptr1);
   else
      printf("%d",*ptr2);
    
    return 0;
}
