#include <stdio.h>

void swap(int*,int*);

int main()
{
   int n1,n2;
   printf("enter two numbers\n");
   scanf("%d %d",&n1,&n2);
   swap(&n1,&n2);
   printf("after swaping numbers are %d %d",n1,n2);
    return 0;
}

void swap(int *a,int *b){

 int t;
 t=*a;
 *a=*b;
 *b=t;

}