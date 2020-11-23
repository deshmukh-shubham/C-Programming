/*
	Problem Statement: Write a program which accept number from user and return the count of odd digits.
	Input : 2395
	Output : 3

	Input : 1018
	Output : 2

	Input : -1018
	Output : 2

	Input : 8462
	Output : 0
*/

/*
	Algorithm
		START
			Accept one number from user and store as no
				Create one counter as cnt annd initialize to 0
					Iterative til no is not equal to zero
						Divide the number by 10 and store the result in no itself
						if digit is odd
							then increment the cnt by 1
					Continue
					
					Return the value of counter
		END
*/

#include<header.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 		CountOdd
//	Input Parameters:	Integer
//	Return Value:		  Integer
//	Description: 		  It is used to display the number of Odd digits in a given number.
//	Author Name:		  Shubham Mukund Deshmukh
//	Date:				      04 August 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)	
{
	int iCnt=0;
	int iDigit=0;
	
	while(iNo!=0)
	{		
		iDigit=iNo%10;			
		if((iDigit%2)!=0)			
		{
			iCnt++;								
		}			
		iNo = (iNo/10);		
	}	
	
	return iCnt;				
	
}

//Entry point Function
int main()
{

	int iValue=0;						//Initialize to 0
	int iRet=0;					
	
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	
	iRet=CountOdd(iValue);				//Function Call
	
	printf("%d",iRet);

	
	return 0;						//Successfull termination of program
}
