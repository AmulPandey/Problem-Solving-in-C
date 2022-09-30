/******************************************************************************

8. Write a function to print PASCAL Triangle. (TSRN)

*******************************************************************************/

#include <stdio.h>
void pascal(int );
int fact(int);
int main()
{
    int x;
    printf("Enter rows of Pascal Triangle :\n");
    scanf("%d",&x);
     pascal(x);
    

    return 0;
}
void pascal(int n)
{ int k;
    for(int i=1;i<=n;i++)
    { k=0;
        for(int j=1;j<=(2*n)-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i)
            {
                if((i+j)%2!=0)
                {
                    printf("%.2d",fact(i-1)/(fact(i-1-k)*fact(k)));
                    k++;
                }
                else
                printf(" ");
            }
            else
            printf(" ");
            
        }
        printf("\n");
    }
    
}
int fact(int n)
{ int ans=1;
    if(n==0)
    {return 1;}
 for(int i=1;i<=n;i++)
  {
    ans*=i;
  }
  return ans;
}