#include <stdio.h>
int main()
{ 
    int n,m,t;
    printf("enter a number\n");
    scanf("%d",&n);
    m=n;

    int count = 0;

    do
    {
        m = m/10;
        count++;
    } while (m);
    
    printf("the reverse of number is :");
    
    for (int i = 0; i < count; i++)
    {
        t = n%10;
        printf("%d",t);
        n = n/10;
    }
    
return 0;
}