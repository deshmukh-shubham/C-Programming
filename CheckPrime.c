/*
	Problem Statement: Accept a number from user and check wheather the given number is prime or not
	Input: 11		
  Output: Given number is a prime number
*/

/*
	Algorithm
		START
			Accept number from user and store into variable no
			Check wheather the given no is prime or not
			Display the string	
		END
*/

#include<stdio.h>

typedef int BOOLEAN;

#define TRUE 1
#define FALSE 0

BOOLEAN Prime(int);

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name:	Prime
//	Input:				  Integer
//	Output:				  None
//	Description:		It is used to display given number is prime or not.
//	Date:				    29 July 2020
//	Author Name:		Shubham Mukundrao Deshmukh
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOLEAN Prime(int iValue)
{
	int iCnt=0;
	int iTemp=0;
	
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
	//Filter FOR 1 & 0
	if((iValue==1) || (iValue==0))
	{
		return TRUE;
	}
	
	for(iCnt=2; iCnt<iValue/2; iCnt++) // Time Complexity = O(N/2)
	{
		if(iValue%iCnt!=0)
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
	}
}

int main()								//Entry Point Funcntion
{
	int iNo=0;
	BOOLEAN bRet = FALSE;
	
	printf("Enter a number:\n");
	scanf("%d",&iNo);
	
	bRet = Prime(iNo);
	
	if(bRet==FALSE)
	{
		printf("Given number is a Prime number\n");
	}
	else
	{
		printf("Given number is not a prime number");
	}
	
	return 0;							// Termination successfully
}

