#include <stdio.h>


float area (int);


int main()
{   
    int r;
    printf("enter a  radius\n");
    scanf("%d",&r);
    area(r);
   
  return 0;
}



float area(int x)
{

   float s = 3.14*x*x;
   printf("area is %f",s);
}


/*
int evenodd(int);

#include <stdio.h>
int main()
{ 
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    evenodd(n)?printf("even number"):printf("odd number");
   
return 0;
}

int evenodd(int x){
      
   return (x % 2 == 0);

}
*/