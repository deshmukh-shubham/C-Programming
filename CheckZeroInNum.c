/*
	Problem Statement: Write a program which accept number from user and check whether it contains 0 in it or not.
	Input : 2395
	Output : There is no Zero

	Input : 1018
	Output : It Contains Zero

	Input : 9000
	Output : It Contains Zero

	Input : 10687
	Output : It Contains Zero
*/

/*
	Algorithm
		START
			Accept one number as no
			Iterate til no not equal to zero
				Perform the mod operation to get the last digit
				Check wheather digit is zero
				if zero	
					return true
				otherwise false	
				divide the no by 10
			Continue
  		END
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 		ChkZero
//	Input Parameters:	Integer
//	Return Value:		  BOOL
//	Description: 		  It is used to check wheather the number contain zero or not. 
//	Author Name:		  Shubham Mukund Deshmukh
//	Date:			        04 August 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
	int iDigit=0;
	
	while(iNo!=0)
	{
		iDigit = iNo%10;
		if(iDigit==0)
		{
			return TRUE;		
		}
		
		iNo = iNo/10;
	}
	return FALSE;
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter a number:\n");
	scanf("%d",&iValue);

	bRet = ChkZero(iValue);
	if(bRet == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	
	return 0;
}
