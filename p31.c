#include <stdio.h>

void re_natnum(int);



int main()
{    
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    re_natnum(n);

return 0;
}

void re_natnum(int x)
{
     
     
     if (x == 1)
       printf("1");
     else if(x)
      {
        printf("%d,",x);
        re_natnum(x-1);
        
        }
    
}