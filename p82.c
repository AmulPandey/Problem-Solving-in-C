 #include <stdio.h>
#include<string.h>

int main()
{
      int i,sum=0;
      int arr[5],*ptr;
      ptr = arr;
   printf("enter 5 numbers\n");

   for (i = 0;i<5; i++)
  {
     scanf("%d",(ptr+i));
  }  
 
  for (i = 0;i<5; i++)
  {
    sum = sum + *(ptr+i);
  }   
     
     printf("sum is %d",sum);

  return 0;

}  