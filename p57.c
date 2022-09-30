#include <stdio.h>  
#include <string.h>  

int main()  
{  
    char str[50], temp;  
    int i, left, right, len;  
   
    printf (" \n Enter a string to reverse order: ");  
    scanf( "%s", &str);  
    len = strlen(str); // get the length of the string  
    left = 0; // set left index at 0  
    right = len - 1; // set right index len - 1  

     
    for (i = left; i <right; i++)  
    {  
        temp = str[i];  
        str[i] = str[right];  
        str[right] = temp;  
        right--;  
    }  
    printf (" The reverse of the original string is: %s ",  str);  

   return 0;  
}  






/*

#include <stdio.h>
int main()
{ 
    int i,j,size;
    char str[100];

    printf("\nenter a string :\n");
    fgets(str,100,stdin);

   for ( i = 0; str[i]; i++);
        size = i;
  
    for ( i = size-1; i >=0; i--)
     {
            printf("%c",str[i]);
         
     }
    
       

return 0;
}

*/