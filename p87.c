#include <stdio.h>
#include <string.h>

struct employ
{
    char id[20];
    char name[20];
    float salary;
};
void display(struct employ x)
{
    printf("%s %s %f", x.id, x.name, x.salary);
}
struct employ input()
{
    struct employ e1;
    printf("enter id = ");
    fgets(e1.id, 20, stdin);
    e1.id[strlen(e1.id) - 1] = '\0';//to avoid \n in fgets.
    fflush(stdin);
    printf("enter name = ");
    fgets(e1.name, 20, stdin);
    e1.name[strlen(e1.name) - 1] = '\0';

    printf("enter salary = ");
    scanf("%f", &e1.salary);
    return e1;
}
int main()
{
    struct employ e2;
    e2 = input();
    display(e2);
    
}