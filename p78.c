
#include <stdio.h>
#include<string.h>

void swap(char **,char **);

int main()
{
   char *str1[20],*str2[20];
   printf("enter two string\n");
   gets(str1);
   gets(str2);

   swap(str1,str2);

   printf("%s  %s",str1,str2);

    return 0;
}

void swap(char **a,char **b)
{   
    
    char *temp;
    
     temp = *a;
     *a = *b;
     *b = temp;
    
}
 
