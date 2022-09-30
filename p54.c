#include <stdio.h>
int main()
{
    
    int i,count;
    char str[10] = "madam";
    char c = 'm';

     for(i=0;str[i];i++)  
    	if(str[i]==c)
    	  count++;
		  
	printf("character '%c' occurs %d times \n ",c,count);


    return 0;
}
