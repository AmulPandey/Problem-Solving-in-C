#include <stdio.h>
#include <string.h>

 struct employe input();

 struct employe {

        int id;
        char name[15];
        int vetan;
    };

int main()
{ 
int i;

struct employe e[3];

   

for (i = 0; i < 3; i++)
{
  printf("please enter the information of employe %d\n id\nname\nvetan\n\n",i+1);
    
    scanf("%d",&e[i].id);
    fflush(stdin);
    fgets(e[i].name,15,stdin);
    scanf("%d",&e[i].vetan);
}    
    
for (i = 0; i < 3; i++)
{
  
printf("information of employe %d is:\n id\nname\nvetan\n\n",i+1);
     printf("id -- %d\n",e[i].id);
     printf("name -- %s",e[i].name);
     printf("vetan -- %d\n",e[i].vetan);

}

return 0;
}


