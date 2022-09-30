#include <stdio.h>
int main()
{   
    int n,a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("enter your choice\n1-addition\n2-substraction\n3-multiplication\n4-devision\n5-exit\n");
    scanf("%d",&n);

    switch (n){

case 1:
    printf("%d",a+b);
    break;

case 2:
    printf("%d",a-b);
    break;

case 3:
  printf("%d", a*b);
    break;
    
case 4:
  printf("%d",a/b);
    break;

case 5:
    break;

default :
        printf("not valid");
          break;
}



return 0;
}
