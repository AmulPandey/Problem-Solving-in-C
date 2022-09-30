//Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user

#include <stdio.h>
int main()
{ 
    int i,j,k,count;
    char str[5][20];

    printf("\nenter 5 string :\n");

    for ( i = 0; i < 5; i++)
    {
        gets(str[i]); 
    }
    
    char strv[] = {'a','e','i','o','u'};

    for ( i = 0; i < 5; i++)
     {  
        count = 0;
        for ( j = 0; j < str[i][j]; j++)
        {
           
            for ( k = 0; k < 5; k++)
            {
                if (str[i][j] == strv[k])
                    count++;
                
            }

        } 
          printf("vowel in given string [%d] are %d\n",i,count);
     }
    
    
         

return 0;
}
 
/*

#include <stdio.h>
int main()
{
    int i, j;
    char str[5][20];
    printf("enter 5 arrays\n");
    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }
    for (i = 0; i < 5; i++)
    {
        int c = 0;
        for (j = 0; j < str[i][j]; j++)
        {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u' ||
                str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U')
            {
                c++;
            }
        }
        printf("Numbers of vowel in string [%d] = %d\n", i, c);
    }
}

*/