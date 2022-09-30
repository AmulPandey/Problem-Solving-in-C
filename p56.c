#include <stdio.h>
int main()
{ 
    int i,j;
    char str[100];

    printf("\nenter a string :");
    fgets(str,100,stdin);

    for ( i = 0; str[i]; i++)
     {
             if (str[i] >= 'a' && str[i] <= 'z' )
             {
                  str[i]= str[i]-32;
             }
      
         
     }
    
        printf("%s",str);

return 0;
}