#include <stdio.h>
int main()
{ 
    int i,j,count =0;
    char str[100];

    printf("\nenter a string :");
    fgets(str,100,stdin);

    char strv[] = {'a','e','i','o','u'};

    for ( i = 0; str[i]; i++)
     {
         for ( j = 0; j < 5; j++)
         {
             if (str[i] == strv[j])
             {
                 count++;
             }
             
         }
         
     }
    
         
         printf("total vowel in given string are %d",count);

return 0;
}