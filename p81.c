 #include <stdio.h>
#include<string.h>

int main()
{
    int i,count=0;
   char str[20],*ptr;
   printf("enter a string\n");
   gets(str);
   
   ptr = str;

  for (i = 0;*(ptr + i); i++)
  {
     if (*(ptr + i) == 'a'||*(ptr + i) == 'e'||*(ptr + i) == 'i'||*(ptr + i) == 'o'||*(ptr + i) == 'u')
            count++;
  }   
     
     printf("%d",count);

  
  
  return 0;

}  