#include <stdio.h>
int main()
{ 
    int n,m,t,rev=0;
    printf("enter a number\n");
    scanf("%d",&n);
    m=n;

    int count = 0;

    do
    {
        m = m/10;
        count++;
    } while (m);

    m=n;
    
    
    for (int i = 0; i < count; i++)
    {
        t = n%10;
        rev = (rev*10) + t;
        n = n/10;
    }
   
    if (m == rev)
    {
      printf("palimdrom number");
    }
    else
      printf("not palimdrom number");
    
return 0;
}
