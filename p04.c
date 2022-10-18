#include <stdio.h>
int main()
{ 
    int x ,y;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
  
   printf("the value of x and y is %d and %d",x,y);

return 0;
}
