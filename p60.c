#include <stdio.h>

int length(char str[]);


int main()
{ 
   int len;
   char str[100];
   printf("enter a string\n");
   //fgets(str,100,stdin);
   //for calculate length of string if we use fgets then result = length +1
   gets(str);
   
   len = length(str);
   printf("%d",len);
   
  return 0;
}


int length(char str[])
{
   int i;
  
   for ( i = 0;str[i]; i++);
   return i;


}

/*

#include <stdio.h>

int length(char str[]);

int main()
{
    int len;
    char str[100];
    printf("enter a string\n");
    fgets(str,100,stdin);

    //gets(str);

    len = length(str);
    printf("%d", len);

    return 0;
}

int length(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
        printf(" and i is: %d\n", i);
    }
    return i;
}

*/