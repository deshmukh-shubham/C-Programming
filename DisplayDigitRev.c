/*
	Problem Statement: Write a program which accept number from user and display its digits in reverse order.
	Input : 2395
	Output : 5
		       9
		       3
		       2
	
	Input : 1018
	Output : 8
		       1
		       0
		       1
	
	Input : -1018
	Output : 8
		       1
		       0
		       1
	
	Input : 9000
	Output : 9
		       0
		       0
	         0
*/

/*
	Algorithm
		START
			Accept one number as no
			Iterate til no not equal to zero
            			Perform the mod operation to seperate out the digit
            			Store the digit in digit and display it
            			divide the no by 10
        		Continue
        		return the value of counter
		END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 		DisplayDigit
//	Input Parameters:	Integer
//	Return Value:		  None
//	Description: 		  It is used to display the individual digits in a number in reverse order. 
//	Author Name:		  Shubham Mukund Deshmukh
//	Date:			        04 August 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
	int iDigit = 0;
	
	//Input Validater
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo!=0)
	{
		iDigit = iNo%10;
		printf("%d\n",iDigit);
		iNo = iNo / 10;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
	
	return 0;
}
