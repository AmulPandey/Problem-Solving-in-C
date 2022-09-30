#include <stdio.h>
#include <string.h>
int main()
{ 
    int i,j,k,count=0;
    char a[5][20];
    char serch[50];

    printf("\nenter 5 string :\n");

    for ( i = 0; i < 5; i++)
    {
        gets(a[i]); 
    }
    
    
    printf("enter string to be searched");
    gets(serch);

    for ( i = 0; i < 5; i++)
    {
          if (strcmp(serch,a[i]) == 0)
              {count++;

              printf("it is found in string number %d\n", i+1);  
              }   

    }     
  
        
   
    
    
return 0;
}