#include <stdio.h>


int count(char str[]);


int main()
{ 
   int result;
   char str[100];
   printf("enter words in a string\n");
   gets(str);

   result = count(str);
   printf("there are %d words in given string",result);

  
    return 0;
}


int count(char str[])
{
      int i,word=1;

      for ( i = 0; str[i]; i++)
      {
        if (str[i] == ' ' && str[i+1] != ' ')
        {
            word++;
        }
        
      }
      return word;
      
     
}