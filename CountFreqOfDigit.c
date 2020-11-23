/*
	Problem Statement: Write a program which accept number from user and count frequency of such a digits which are less than 6.
	
	Input : 2395
	Output : 3
	
	Input : 1018
	Output : 3

	Input : 9440
	Output : 3

	Input : 96672
	Output : 1
*/

/*
	Algorithm
		START
			Accept one number as no
			Create one counter as cnt and initialized to zero
			Iterate til no not equal to zero
				Perform the mod operation to get the last digit
				Check wheather digit is less than 6 or not
				if yes
					increment the counter by one
				divide the no by 10
			Continue
			return the counter value
  		END
*/

#include"Header.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 		Count
//	Input Parameters:	Integer
//	Return Value:	  	Integer
//	Description: 		  It is used to count the digit lesser than 6 in the given number.  
//	Author Name:		  Shubham Mukund Deshmukh
//	Date:			        04 August 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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
		iDigit = iNo%10;
		if(iDigit<6)
		{
			iCnt++;
		}
		iNo =iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	
	iRet = Count(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
