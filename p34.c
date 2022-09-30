// C program to convert decimal
// number to octal number
#include <stdio.h>

// function to calculate the octal value of the given
// decimal number
void decimaltoOctal(int deciNum)
{

	int octalNum = 0, countval = 1;
	int dNo = deciNum;

	while (deciNum != 0) {
		// decimals remainder is calculated
		int remainder = deciNum % 8;

		// storing the octalvalue
		octalNum += remainder * countval;

		// storing exponential value
		countval = countval * 10;
		deciNum /= 8;
	}
	printf("%d", octalNum);
}

// Driver Code
int main()
{
	int n = 33;

	// Function Call
	decimaltoOctal(n);
	return 0;
}
