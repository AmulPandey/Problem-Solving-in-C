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
      struct employe e2 = input();

return 0;
}

struct employe input(){

     struct employe e1;
     printf("please enter the information of employe\n id\nname\nvetan\n");

    scanf("%d",&e1.id);
    fflush(stdin);
    fgets(e1.name,15,stdin);
    scanf("%d",&e1.vetan);
    
     printf("id -- %d\n",e1.id);
     printf("name -- %s",e1.name);
     printf("vetan -- %d\n",e1.vetan);

    return e1; 
}  