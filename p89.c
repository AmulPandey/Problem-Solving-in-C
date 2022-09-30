#include <stdio.h>
#include <string.h>

 struct employe input();

 struct employe {

        char id[10];
        char name[15];
        float vetan;
    };

int main()
{ 

int i,j;

struct employe e[3],t;

for (i = 0; i < 3; i++)
{
  printf("employee no %d:\n",i+1);  
    fflush(stdin);
    printf("enter id = ");
    fgets(e[i].id, 20, stdin);
    e[i].id[strlen(e[i].id) - 1] = '\0';
    fflush(stdin);
    printf("enter name = ");
    fgets(e[i].name, 20, stdin);
    e[i].name[strlen(e[i].name) - 1] = '\0';
    printf("enter vetan = ");
    scanf("%f", &e[i].vetan);
}    
  

for (i = 0; i < 2; i++)
{
    for ( j = i+1; j < 3 ; j++)
    {
       if (e[i].vetan > e[j].vetan)
       {
          t = e[i];
          e[i]=e[j];
          e[j]=t;
       }
       
    }
    
}

printf("information of employee's (based on vetan) is:\n");
    
for (i = 0; i < 3; i++)
{
  
     printf("id is %s\n",e[i].id);
     printf("name -- %s\n",e[i].name);
     printf("vetan -- %f\n",e[i].vetan);

}

return 0;
}


/*
#include <stdio.h>
#include <string.h>
struct employ
{
    char id[20];
    char name[20];
    float salary;
};
struct employ input()
{
    struct employ e1;
    fflush(stdin);
    printf("enter id = ");
    fgets(e1.id, 20, stdin);
    e1.id[strlen(e1.id) - 1] = '\0';
    fflush(stdin);
    printf("enter name = ");
    fgets(e1.name, 20, stdin);
    e1.name[strlen(e1.name) - 1] = '\0';
    printf("enter salary = ");
    scanf("%f", &e1.salary);
    return e1;
}
void SortByName(struct employ e[], int x)
{
    int i, j;
    struct employ temp;
    for (i = 1; i < x; i++)
    {
        for (j = 0; j < x - i; j++)
        {
            if (e[j].salary > e[j + 1].salary)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
}
void display(struct employ e)
{
    printf("ID = %s  NAME = %s  SALARY = %f\n", e.id, e.name, e.salary);
}
int main()
{
    struct employ e[3];
    int i;
    for (i = 0; i < 3; i++)
        e[i] = input();
    printf("*************************\n");
    printf("After Sorting By Salary :- \n");
    SortByName(e, 3);
    for (i = 0; i < 3; i++)
        display(e[i]);
}

*/