#include <stdio.h>
int main()
{ 
    int n1,n2;
    printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);

    for(int i =1; i<= n1*n2;i++)

   
    if (i % n1 == 0 && i % n2 == 0)
    {
        printf("%d is the LCM", i);
        break;
    }
    
    //if hcf == 1 then both numbers are called CO-PRIME.
    
   
   if (n2 > n1)
   {
    
   
    for (int i = n2 ; i>=1  ; i--)
   
    
    if (n1 % i == 0 && n2 % i == 0)
    {
        printf("\n%d is the HCF", i);
        break;
    }
   
}
    

return 0;
}

    




