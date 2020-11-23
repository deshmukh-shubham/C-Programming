/*
	Problem Statement: Write a program which accept number from user and return the count of digits in between 3 and 7.
	Input : 2395
	Output : 1

	Input : 1018	
	Output : 0

	Input : 4521
	Output : 2
	
	Input : 9922
	Output : 0
*/

/*
	Algorithm
		START
			Accept one number from user and store as no
				Create one counter as cnt annd initialize to 0
					Iterative til no is not equal to zero
						Divide the number by 10 and store the result in no itself
						if digit is in between 3 and 7
							then increment the cnt by 1
					Continue
					
					Return the value of counter
		END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 		CountRange
//	Input Parameters:	Integer
//	Return Value:		  Integer
//	Description: 		  It is used to count the digits in between 3 and 7 in a given number .
//	Author Name:		  Shubham Mukund Deshmukh
//	Date:				      04 August 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)	
{
	int iCnt=0;
	int iDigit=0;
	
	//Input Updater
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{		
		iDigit=iNo%10;			
		if((iDigit>3) && (iDigit<7))			
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
	
	iRet=CountRange(iValue);				//Function Call
	
	printf("%d",iRet);

	
	return 0;						//Successfull termination of program
}
