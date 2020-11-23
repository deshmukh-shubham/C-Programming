/*
	Problem Statement: Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
	Input : 2395
	Output : -15 (2 - 17)

	Input : 1018
	Output : 6 (8 - 2)

	Input : 8440
	Output : 16 (16 - 0)

	Input : 5733
	Output : -18 (0 - 18)
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
//	Function name: 		CountDiff
//	Input Parameters:	Integer
//	Return Value:		  Integer
//	Description: 		  It is used to return difference between summation of even digits and summation of odd digits.
//	Author Name:		  Shubham Mukund Deshmukh
//	Date:				      04 August 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)		
{
	int iDigit=0;
	int iEvenSum=0;
	int iOddSum=0;
	int iDiff=0;
	
	//Input Updater
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{		
		iDigit=iNo%10;			
		
		if(iDigit%2==0)			
		{
			iEvenSum= iEvenSum + iDigit;					
		}
		else
		{
			iOddSum = iOddSum + iDigit;
		}
		iNo = (iNo/10);		
	}	
	iDiff = iEvenSum-iOddSum;
	return iDiff;								// You can directly return (iEvenSum-iOddSum)		
}

//Entry point Function
int main()
{

	int iValue=0;						//Initialize to 0
	int iRet=0;					
	
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	
	iRet=CountDiff(iValue);				//Function Call
	
	printf("%d",iRet);

	
	return 0;						//Successfull termination of program
}
