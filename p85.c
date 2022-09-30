#include <stdio.h>
#include <string.h>

 struct employe {

        int id;
        char name[15];
        double vetan;
    }/*variable name (eg -- e)can be declared here also.*/;

int main()
{ 
   struct employe e;

     printf("this is the information of employe\n");

   e.id = 37;
     printf("id -- %d\n",e.id);

   strcpy(e.name,"AMUL PANDEY");
     printf("name -- %s\n",e.name);

   e.vetan = 100000.00000;
     printf("vetan -- %lf",e.vetan);

return 0;
}