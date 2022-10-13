#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c,*str;
    int i=0,j=1;

    printf("enter a string\n");

    str = (char*)malloc(sizeof(char));

   while (c != '\n')
   {
     c = getc(stdin);
     j++;

     str = (char*)realloc(str,j*sizeof(char));

     str[i]  = c;
     i++;
   }
   
   str[i] = '\0';

   printf("your string is \n%s",str);

   free(str);

     return 0;

}
