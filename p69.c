#include <stdio.h>
int main()
{ 

    int i;
    char arr[5][20];
    printf("enter 5 string\n");
    for ( i = 0; i < 5; i++)
    {
        gets(arr[i]);
    }

for ( i = 0; i < 5; i++)
{
 
    printf("%s\n",arr[i]);
}
    



return 0;
}