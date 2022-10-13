#include <stdio.h>
#include <stdlib.h>

int main()
{
    int*ptr,i,n;
    int sum=0;
    float avg;
printf("\nhow many times you want to enter data values: ");
scanf("%d",&n);

ptr = (int*)calloc(n,sizeof(int));

printf("\nenter data values %d times\n",n);

for (i = 0; i < n; i++)
{
    scanf("%d",(ptr+i));
}

for (i = 0; i < n; i++)
{
  sum = sum + *(ptr+i);
}
 
 avg = sum/n;

printf("\navarage is %f",avg);

free(ptr);

    return 0;
}
