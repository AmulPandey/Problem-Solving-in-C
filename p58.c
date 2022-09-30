#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char arr[15];
        
        //accept character array string from user
	printf("Enter character string: ");
	gets(arr);

	//get the length of array in the variable counter
	int counter = strlen(arr);

	

        //apply ascending sorting algorithm
	for(i=0; i<counter-1; i++)
	{
		for(j=i+1; j<counter;j++)
		{
			if (arr[i] > arr[j])
			{
				char arrtemp;
				arrtemp = arr[i];
				arr[i] = arr[j];
				arr[j] = arrtemp;
			}
		}
	}

        //display the final result
	for(i=0;i<counter; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}