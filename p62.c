#include <stdio.h>

void alphanumeric(char str[]);

int main()
{
  
  char str[100];
  printf("enter a string\n");
  fgets(str,100,stdin);

  alphanumeric(str);

  return 0;

}


void alphanumeric(char str[])
{ 
    int i,j,alpha=0,num=0;
   

    for ( i = 0; str[i]; i++)
     {
             if ((str[i] >= 'a' && str[i] <= 'z' ) || (str[i] >= 'A' && str[i] <= 'Z')     )
             {
                  alpha++;
             }
             if ((str[i] >= '0' && str[i] <= '9' ))
             {
                  num++;
             }
             
     }
    
        if (alpha != 0 && num != 0)
        {
            printf("string is alphanumeric");
        }
        else
            printf("string is not alphanumeric");

}


