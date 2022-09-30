#include<stdio.h>
#include<string.h>

int main()
{
	
    int i;
    char username[15];
	char password[15];

	printf("Enter the username: ");
	gets(username);

	printf("\nEnter the password: ");
	gets(password);

   char user[3][15] = {"amul","abhay","ram"};
   char pass[3][15] = {"121212","070707","010101"};

 for (i = 0; i < 3; i++)
 {
  
	if(strcmp(username,user[i]) == 0)
     {
		if(strcmp(password,pass[i]) == 0)
        {
			printf("\nUser successfully logged in...");
            break;
		}
        else
			printf("\nPassword entered is invalid");
            break;
		
	}
       
 }  
    if(i == 3)
        printf("\nUsername entered is invalid");

	return 0;
}





/*
#include <stdio.h>
 
int main()
{
 char password[10], username[10], ch;
 int i;
 
 printf("Enter User name: ");
 gets(username);
 printf("Enter the password < any 8 characters>: ");

 for (i = 0; i < 8; i++)
 {
            ch = getchar();
            password[i] = ch;
            ch = '*' ;
            printf("%c", ch);
 }
        //password[i] = '\0';
 //  Original password can be printed, if needed //
 printf("\n Your password is :");
 for (i = 0; i < 8; i++)
 {
        printf("%c", password[i]);
 }

        return 0;
}

*/