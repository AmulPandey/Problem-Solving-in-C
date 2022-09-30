int check(int,int);

#include <stdio.h>
int main()
{ 
    int n1,n2;
    printf("enter a number & digit\n");
    scanf("%d%d",&n1,&n2);
    check(n1,n2);
    check(n1,n2)?printf("matched"):printf("not matched");
   
return 0;
}

int check(int x,int y)
{
   
   int z,n,m=0;
  
   n = x;
   while(n)
   {
    z = n%10; 
    n = n/10;
    if (z==y)
    {
        m = 1;
        break;
    }
    
   }
  
  return (m==1);

}

