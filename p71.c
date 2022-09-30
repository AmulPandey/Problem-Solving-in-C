#include <stdio.h>
#include <string.h>
int main()
{ 
    int i,j;
    char a[5][20];
   

    printf("\nenter 5 string :\n");

    for ( i = 0; i < 5; i++)
    {
        gets(a[i]); 
    }
    
    for ( i = 0; i < 5; i++)
    {
    //str – The string in which the character is searched.
    //ch – The character that is searched in the string str.
    /*
    This returns a pointer to the first occurrence of the character c in the string str, 
    or NULL if the character is not found.
    */
          if (strchr(a[i],'@') != 0)
              {
                printf("it is found in %s\n",a[i]);  
              }   

    }     


return 0;
}



/*
#include <stdio.h>


int main()
{   
    int a;
    printf("Enter the number of Email addresses\n");
    scanf("%d",&a);
    char s[a][50];
    char s1[50];
    int i,j,count;
    printf("Enter %d mail addresses:\n",a);
    for(i=0;i<a;i++)
    {
        fgets(s[i],50,stdin);
    }
    printf("\nThe odd one email address is:\n");
    
    for(i=0;i<a;i++)
    {   count=0;
        for(j=0;s[i][j];j++)
        {
            if(s[i][j]=='@')
              count++;
        }
        if(count==0)
        {
            printf("%s",s[i]);
        }
    }
   
   

    return 0;
}

*/
