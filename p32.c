#include <stdio.h>

int recursivsum(int);



int main()
{    
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("%d",recursivsum(x));

return 0;
}

int recursivsum(int n){
    int sum=0;
    if (n == 1)
     return 1;
    
    sum = n + recursivsum(n-1);
    return sum;

}