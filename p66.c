#include <stdio.h>
#include <string.h>

void printFrequency(int freq[])
{
	      for (int i = 0; i < 26; i++) 
          {
      
	      	if (freq[i] != 0) 
              {
        
	        		printf("%c - %d\n",i + 'a', freq[i]);
	        	}
	      }

     for (int i = 0; i < 26; i++)
           {
                if (freq[i] == 2)
                {
                    printf("%c is a dublicate element\n",i + 'a');
                }
           }
}

void findFrequncy(char S[])
{
	int i = 0;

	int freq[26] = { 0 };

	while (S[i] != '\0') {

		freq[S[i] - 'a']++;
		i++;
	}

	printFrequency(freq);
}


int main()
{
	char S[100] = "my name is amul pandey";
    findFrequncy(S);
    
   
}