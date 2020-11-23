/*
	Problem Statement: Write a program which accept number from user and count frequency of 2 in it.
	Input : 2395
	Output : 1

	Input : 1018
	Output : 0

	Input : 9000
	Output : 0

	Input : 922432
	Output : 3
*/

/*
	Algorithm
		START
			Accept one number as no
			Create one counter as cnt and initialized to zero
			Iterate til no not equal to zero
				Perform the mod operation to get the last digit
				Check wheather digit is two
				if two
					increment the counter by one
				divide the no by 10
			Continue
			return the counter value
  		END
*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 		CountTwo
//	Input Parameters:	Integer
//	Return Value:		  Integer
//	Description: 		  It is used to count the 2 digit in the given number.  
//	Author Name:		  Shubham Mukund Deshmukh
//	Date:			        04 August 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
		if(iDigit==2)						//OR Instead of Updater Use->	"if((iDigit == 2) || (iDigit == -2))" also if you want to check frequency of any digit just replace 2 by digit. 
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
	
	iRet = CountTwo(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
